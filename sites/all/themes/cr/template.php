<?php

/**
 * @file
 * template.php
 */

/**
 * Implements hook_preprocess_html().
 */
function cr_preprocess_html(&$vars) {
  //inspect_trace();
  $node = menu_get_object();
  if($node) {
    $node_wrapper = entity_metadata_wrapper('node', $node);

    //If the content type of this node has a field, field_body_classes_select,
    //let's pass the value(s) of the field to the body class in html.tpl.php
    if (isset($node_wrapper->field_body_classes_select)){
      $body_classes = $node_wrapper->field_body_classes_select->value();
      foreach ($body_classes as $body_class) {
        $vars['classes_array'][] = $body_class;
      }
    }

    //If the content type of this node has a field, field_custom_body_classes,
    //let's pass the value(s) of the field to the body class in html.tpl.php
    if (isset($node_wrapper->field_custom_body_classes)){
      $custom_body_classes = $node_wrapper->field_custom_body_classes->value();
      foreach ($custom_body_classes as $custom_body_class) {
        $vars['classes_array'][] = $custom_body_class;
      }
    }

    //dpm($vars);

    $field_items = field_get_items('node', $node, 'field_image');
    //dpm($node);
    if(!$field_items) {
      $vars['classes_array'][] = "no-main-image";
    } else {
      $vars['classes_array'][] = "main-image";
    }

  }

  foreach($vars['user']->roles as $role){
    $vars['classes_array'][] = 'role-' . drupal_html_class($role);
  }

}

/**
 * theme_menu_link()
 */

function cr_menu_link(array $variables) {

  global $user;

  if ($variables['element']['#title']=='Edit Job Details') {
    $nid = db_query('SELECT nid FROM {node} WHERE type = :type and uid = :uid', array(':type' => 'job', ':uid' => $user->uid))->fetchField();
    //dsm($nid);
    //dsm($variables['element']);
    if($nid > 0) {
      $variables['element']['#href']='job/' . $user->uid . '/' . $nid;
    } else {
      $variables['element']['#attributes']['class'][] = 'invisible';
    }
  }

  //add class for li
  $variables['element']['#attributes']['class'][] = 'menu-' . $variables['element']['#original_link']['mlid'];

  //add class for a
  $variables['element']['#localized_options']['attributes']['class'][] = 'menu-' . $variables['element']['#original_link']['mlid'];

  //dvm($variables['element']);
  return theme_menu_link($variables);
}


//Change Contact form page title
function cr_form_contact_site_form_alter(&$form, &$form_state) {
  //drupal_set_title('Contact Us');
}

//Special theming profile active tickbox
function cr_checkbox($variables) {
  $element = $variables ['element'];
  $element['#attributes']['type'] = 'checkbox';
  element_set_attributes($element, array('id', 'name', '#return_value' => 'value'));

  // Unchecked checkbox has #value of integer 0.
  if (!empty($element ['#checked'])) {
    $element['#attributes']['checked'] = 'checked';
  }

  if(isset($element['#attributes']['id'])) {
    if ($element['#attributes']['id'] == 'edit-profile-carer-field-profile-active-und') {
      $element['#attributes']['data-toggle'] = 'toggle';
      $element['#attributes']['data-on'] = 'Active';
      $element['#attributes']['data-off'] = 'Unactive';
      $element['#attributes']['data-onstyle'] = 'success';
    }
  }

  _form_set_class($element, array('form-checkbox'));

  return '<input' . drupal_attributes($element ['#attributes']) . ' />';
}

//remove fieldset from date field in entry form
function cr_date_combo($variables) {
  return theme('form_element', $variables);
}

/**
 * Registers overrides for various functions.
 *
 * In this case, overrides three user functions
 */
function cr_theme() {
  $items = array();

  $items['user_login'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'cr') . '/templates',
    'template' => 'user-login',
    'preprocess functions' => array(
      'cr_preprocess_user_login'
    ),
  );
  return $items;
}

function cr_preprocess_user_login(&$vars) {
  $vars['content_attributes_array']['class'][] = 'content';
  $vars['title_attributes_array']['class'][] = 'content';
  $vars['attributes_array']['class'][] = 'content';
  $vars['classes_array'] = array('content');
  $vars['forgot_link'] = l(t('Forgot password?'),'user/password');
}

function cr_preprocess_page(&$vars) {

  global $user;

  if(arg(0)=='profile-employer') :
    drupal_set_title(t('My Profile'));

  elseif(arg(0)=='subscription' && arg(1)=='cancelled') :
    drupal_set_title('Membership Cancelled');

  elseif (arg(0) == 'user' && arg(2) == 'edit') :
    drupal_set_title(t('Change email/password'));

  elseif(arg(0) == 'profile-carer' && in_array('employer active', $user->roles)) :
    $variables['theme_hook_suggestion'] = 'page__profile_carer_carer_employer_active';

  elseif(arg(0) == 'profile-carer' && arg(1) == $user->uid) :
    drupal_set_title(t('My Profile'));

  elseif(arg(0)=='profile-agency') :
    $profile = profile2_load_by_user(arg(1));
    drupal_set_title($profile['agency']->field_company['und'][0]['value']);

  // set title to carer name for carer details page
  elseif(arg(0) == 'carer-details' && is_numeric(arg(1))) :
    //$profile = profile2_load(arg(1));
    //dsm($profile);
    //drupal_set_title(t($profile->field_first_name_em['und'][0]['value'] . ' ' . $profile->field_last_name_em['und'][0]['value']));
    drupal_set_title(cr_profile(arg(1)));

  //elseif(arg(0)=='node' && is_numeric(arg(1))) :
  //elseif($vars['node']->type=='message') :

  elseif(arg(0)=='node' && arg(1)=='add' && arg(2)=='message') :
    if (isset($_GET['field_to'])) :
      $to_user = user_load($_GET['field_to']);
      //dpm($to_user);
      if (in_array('agency', $to_user->roles)) :
        $profile = profile2_by_uid_load($_GET['field_to'], 'agency');
        $to = $profile->field_company['und'][0]['value'];
      else :
        $cr_uid = $_GET['field_to'];
        $to = cr_profile($cr_uid);
      endif;
      drupal_set_title('Send message to ' . $to);
    endif;

  elseif(arg(0)=='node') :
    $menu_object = menu_get_object();
    if (isset($menu_object->type)) :
      $field_items = field_get_items('node', $menu_object, 'field_image');
      if(!$field_items) {
        $vars['classes_array'][] = "no-main-image";
      } else {
        $vars['classes_array'][] = "main-image";
      }
      //dpm($vars);

      if ('message' == $menu_object->type) :
        $profile = cr_profile($vars['node']->uid);
      //dpm($profile);
      //$vars['title'] = "Message from " . $profile;
      elseif ('job' == $menu_object->type) :
        if($user->uid == $vars['node']->uid  && in_array('employer', $user->roles)) :
          $vars['title'] = 'My Job';
        endif;
      endif;
    endif;
  endif;
  //dpm($vars['node']);
  //dpm($vars);
}

/**
 * Implements hook_profile2_view_alter()
 *
 * Overrides the default title of the Profile2 page using profile fields.
 * Where no profile exists, do nothing i.e. use Profile2's default label.
 *
 */
function cr_profile2_view_alter($build) {
  // If Devel is enabled, you may uncomment dpm() to find out how
  // you can access the various fields of your profile.
  //dpm($build);
  // if (!isset($build['empty'])) {
  if($build['#view_mode'] == 'carer_details_employer') {
    drupal_set_title(cr_profile(arg(1)));
  }
}

/**
 * Overrides theme_menu_local_tasks().
 */
function cr_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
//    $variables['primary']['#prefix'] .= '<ul class="tabs--primary nav nav-tabs">';
    $variables['primary']['#prefix'] .= '<ul class="tabs--primary nav nav-pills">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }

  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs--secondary pagination pagination-sm">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}


// Change author label on message node to 'from' instead of author
/*
function cr_preprocess_field(&$vars){
	if($node = menu_get_object()) {
		if($node->type=='message') {
			if($vars['element']['#field_name']=='author') {
				$vars['label'] = 'From';
			}
		}
	}
}
*/

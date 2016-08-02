<?php
/**
 * @file
 * views_view.jobs.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'jobs';
$view->description = 'Search for jobs in elderly care, disability care, home care, and other types of care';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Jobs';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Favourite Jobs';
$handler->display->display_options['css_class'] = 'carer-list';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'time';
$handler->display->display_options['cache']['results_lifespan'] = '3600';
$handler->display->display_options['cache']['results_lifespan_custom'] = '0';
$handler->display->display_options['cache']['output_lifespan'] = '3600';
$handler->display->display_options['cache']['output_lifespan_custom'] = '0';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'input_required' => 0,
    'text_input_required' => array(
      'text_input_required' => array(
        'value' => 'Select any filter and click on Apply to see results',
        'format' => 'full_html',
      ),
    ),
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
    'secondary_collapse_override' => '0',
  ),
  'field_geofield_distance' => array(
    'bef_format' => 'default',
    'slider_options' => array(
      'bef_slider_min' => '0',
      'bef_slider_max' => '500',
      'bef_slider_step' => '5',
      'bef_slider_animate' => '',
      'bef_slider_orientation' => 'horizontal',
    ),
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_job_type_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_preferred_carer_gender_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_job_hours_tid' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
          1 => 'vocabulary',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_job_status_tid' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
          1 => 'vocabulary',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_care_category_tid' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
          1 => 'vocabulary',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_lgbt_care_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
);
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'viewsgroupfield_fields';
$handler->display->display_options['row_options']['hide_empty'] = 0;
/* Header: Global: Block area */
$handler->display->display_options['header']['block']['id'] = 'block';
$handler->display->display_options['header']['block']['table'] = 'views';
$handler->display->display_options['header']['block']['field'] = 'block';
$handler->display->display_options['header']['block']['empty'] = TRUE;
$handler->display->display_options['header']['block']['block_to_insert'] = 'block:6';
/* Relationship: Flags: favourite_jobs */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'favourite_jobs';
/* Field: Content: Author uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h4';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Proximity */
$handler->display->display_options['fields']['field_geofield_distance']['id'] = 'field_geofield_distance';
$handler->display->display_options['fields']['field_geofield_distance']['table'] = 'field_data_field_geofield';
$handler->display->display_options['fields']['field_geofield_distance']['field'] = 'field_geofield_distance';
$handler->display->display_options['fields']['field_geofield_distance']['ui_name'] = 'Proximity';
$handler->display->display_options['fields']['field_geofield_distance']['label'] = '';
$handler->display->display_options['fields']['field_geofield_distance']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_geofield_distance']['alter']['text'] = '([field_geofield_distance] miles away)';
$handler->display->display_options['fields']['field_geofield_distance']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_geofield_distance']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_geofield_distance']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_geofield_distance']['set_precision'] = TRUE;
$handler->display->display_options['fields']['field_geofield_distance']['precision'] = '1';
$handler->display->display_options['fields']['field_geofield_distance']['source'] = 'exposed_geofield_filter';
$handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_manual'] = array(
  'lat' => '',
  'lon' => '',
);
$handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_geofield';
$handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_geofield';
$handler->display->display_options['fields']['field_geofield_distance']['radius_of_earth'] = '3959';
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]" class="btn btn-primary" type="button">View full details ></a>';
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flagging';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
/* Field: Send message */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Send message';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/node/add/message?field_to=[uid]" class="btn btn-primary" type="button">Send Message</a>';
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
/* Field: Field: District */
$handler->display->display_options['fields']['field_district']['id'] = 'field_district';
$handler->display->display_options['fields']['field_district']['table'] = 'field_data_field_district';
$handler->display->display_options['fields']['field_district']['field'] = 'field_district';
$handler->display->display_options['fields']['field_district']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['fields']['field_district']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: First Name */
$handler->display->display_options['fields']['field_first_name_em']['id'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['table'] = 'field_data_field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['field'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_first_name_em']['label'] = 'Contact Name';
$handler->display->display_options['fields']['field_first_name_em']['settings'] = array(
  'field_formatter_label' => '',
);
/* Field: Field: Job Type Wanted */
$handler->display->display_options['fields']['field_job_type']['id'] = 'field_job_type';
$handler->display->display_options['fields']['field_job_type']['table'] = 'field_data_field_job_type';
$handler->display->display_options['fields']['field_job_type']['field'] = 'field_job_type';
$handler->display->display_options['fields']['field_job_type']['label'] = 'Job Type';
$handler->display->display_options['fields']['field_job_type']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
$handler->display->display_options['fields']['field_job_type']['delta_offset'] = '0';
/* Field: Field: Work Type Wanted */
$handler->display->display_options['fields']['field_job_status']['id'] = 'field_job_status';
$handler->display->display_options['fields']['field_job_status']['table'] = 'field_data_field_job_status';
$handler->display->display_options['fields']['field_job_status']['field'] = 'field_job_status';
$handler->display->display_options['fields']['field_job_status']['label'] = 'Work Type';
$handler->display->display_options['fields']['field_job_status']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_job_status']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
$handler->display->display_options['fields']['field_job_status']['delta_offset'] = '0';
/* Field: Type of Care */
$handler->display->display_options['fields']['field_care_category']['id'] = 'field_care_category';
$handler->display->display_options['fields']['field_care_category']['table'] = 'field_data_field_care_category';
$handler->display->display_options['fields']['field_care_category']['field'] = 'field_care_category';
$handler->display->display_options['fields']['field_care_category']['ui_name'] = 'Type of Care';
$handler->display->display_options['fields']['field_care_category']['label'] = 'Type of Care';
$handler->display->display_options['fields']['field_care_category']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_care_category']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
$handler->display->display_options['fields']['field_care_category']['delta_offset'] = '0';
/* Field: Content: Job Hours */
$handler->display->display_options['fields']['field_job_hours']['id'] = 'field_job_hours';
$handler->display->display_options['fields']['field_job_hours']['table'] = 'field_data_field_job_hours';
$handler->display->display_options['fields']['field_job_hours']['field'] = 'field_job_hours';
$handler->display->display_options['fields']['field_job_hours']['label'] = 'Hours';
$handler->display->display_options['fields']['field_job_hours']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_job_hours']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
$handler->display->display_options['fields']['field_job_hours']['delta_offset'] = '0';
/* Field: Content: Pay */
$handler->display->display_options['fields']['field_pay']['id'] = 'field_pay';
$handler->display->display_options['fields']['field_pay']['table'] = 'field_data_field_pay';
$handler->display->display_options['fields']['field_pay']['field'] = 'field_pay';
$handler->display->display_options['fields']['field_pay']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_pay']['settings'] = array(
  'thousand_separator' => ',',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
  'field_formatter_label' => '',
);
/* Field: Content: Pay Basis */
$handler->display->display_options['fields']['field_pay_rate_basis']['id'] = 'field_pay_rate_basis';
$handler->display->display_options['fields']['field_pay_rate_basis']['table'] = 'field_data_field_pay_rate_basis';
$handler->display->display_options['fields']['field_pay_rate_basis']['field'] = 'field_pay_rate_basis';
$handler->display->display_options['fields']['field_pay_rate_basis']['label'] = 'Pay';
$handler->display->display_options['fields']['field_pay_rate_basis']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_pay_rate_basis']['alter']['text'] = '[field_pay] [field_pay_rate_basis]';
$handler->display->display_options['fields']['field_pay_rate_basis']['settings'] = array(
  'field_formatter_label' => '',
);
/* Field: Content: Job Duties */
$handler->display->display_options['fields']['field_job_duties']['id'] = 'field_job_duties';
$handler->display->display_options['fields']['field_job_duties']['table'] = 'field_data_field_job_duties';
$handler->display->display_options['fields']['field_job_duties']['field'] = 'field_job_duties';
$handler->display->display_options['fields']['field_job_duties']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_job_duties']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
$handler->display->display_options['fields']['field_job_duties']['delta_offset'] = '0';
/* Field: Content: Night Time Assistance */
$handler->display->display_options['fields']['field_night_time_assistance']['id'] = 'field_night_time_assistance';
$handler->display->display_options['fields']['field_night_time_assistance']['table'] = 'field_data_field_night_time_assistance';
$handler->display->display_options['fields']['field_night_time_assistance']['field'] = 'field_night_time_assistance';
$handler->display->display_options['fields']['field_night_time_assistance']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Content: Preferred Carer Gender */
$handler->display->display_options['fields']['field_preferred_carer_gender']['id'] = 'field_preferred_carer_gender';
$handler->display->display_options['fields']['field_preferred_carer_gender']['table'] = 'field_data_field_preferred_carer_gender';
$handler->display->display_options['fields']['field_preferred_carer_gender']['field'] = 'field_preferred_carer_gender';
$handler->display->display_options['fields']['field_preferred_carer_gender']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: LGBT */
$handler->display->display_options['fields']['field_lgbt_care']['id'] = 'field_lgbt_care';
$handler->display->display_options['fields']['field_lgbt_care']['table'] = 'field_data_field_lgbt_care';
$handler->display->display_options['fields']['field_lgbt_care']['field'] = 'field_lgbt_care';
$handler->display->display_options['fields']['field_lgbt_care']['ui_name'] = 'LGBT';
$handler->display->display_options['fields']['field_lgbt_care']['label'] = 'LGBT care?';
$handler->display->display_options['fields']['field_lgbt_care']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: Other Languages */
$handler->display->display_options['fields']['field_language']['id'] = 'field_language';
$handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
$handler->display->display_options['fields']['field_language']['field'] = 'field_language';
$handler->display->display_options['fields']['field_language']['label'] = 'Language wanted';
$handler->display->display_options['fields']['field_language']['empty'] = 'Not entered';
$handler->display->display_options['fields']['field_language']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_language']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_language']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_language']['settings'] = array(
  'field_formatter_label' => '',
);
/* Field: Content: Agency Job */
$handler->display->display_options['fields']['field_agency_job']['id'] = 'field_agency_job';
$handler->display->display_options['fields']['field_agency_job']['table'] = 'field_data_field_agency_job';
$handler->display->display_options['fields']['field_agency_job']['field'] = 'field_agency_job';
$handler->display->display_options['fields']['field_agency_job']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['fields']['field_agency_job']['settings'] = array(
  'field_formatter_label' => '',
);
/* Field: Field: Company */
$handler->display->display_options['fields']['field_company']['id'] = 'field_company';
$handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
$handler->display->display_options['fields']['field_company']['field'] = 'field_company';
$handler->display->display_options['fields']['field_company']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_company']['label'] = 'Agency Name';
$handler->display->display_options['fields']['field_company']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_company']['empty'] = '0';
$handler->display->display_options['fields']['field_company']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_company']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_company']['settings'] = array(
  'field_formatter_label' => '',
);
/* Field: Field: Logo */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => '',
  'field_formatter_label' => '',
);
/* Field: agency details */
$handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['ui_name'] = 'agency details';
$handler->display->display_options['fields']['views_conditional']['label'] = '';
$handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['views_conditional']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['views_conditional']['if'] = 'field_agency_job';
$handler->display->display_options['fields']['views_conditional']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional']['equalto'] = 'Yes';
$handler->display->display_options['fields']['views_conditional']['then'] = '<span class="views-label">Agency:</span>
[field_company]
[field_image]';
$handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
/* Field: Field: Job Description */
$handler->display->display_options['fields']['field_description']['id'] = 'field_description';
$handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
$handler->display->display_options['fields']['field_description']['field'] = 'field_description';
$handler->display->display_options['fields']['field_description']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: More */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'More';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="#" class="more-hide"><i class="fa fa-chevron-circle-down"></i></a>';
$handler->display->display_options['fields']['nothing']['element_class'] = 'more-link';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: Field: Geofield (field_geofield) - proximity */
$handler->display->display_options['sorts']['field_geofield_distance']['id'] = 'field_geofield_distance';
$handler->display->display_options['sorts']['field_geofield_distance']['table'] = 'field_data_field_geofield';
$handler->display->display_options['sorts']['field_geofield_distance']['field'] = 'field_geofield_distance';
$handler->display->display_options['sorts']['field_geofield_distance']['source'] = 'exposed_geofield_filter';
$handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_manual'] = array(
  'lat' => '',
  'lon' => '',
);
$handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_geofield';
$handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_geofield';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'job' => 'job',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Distance */
$handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
$handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_geofield';
$handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
$handler->display->display_options['filters']['field_geofield_distance']['ui_name'] = 'Distance';
$handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
$handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
  'distance' => '25',
  'distance2' => 200,
  'unit' => '3959',
  'origin' => '',
);
$handler->display->display_options['filters']['field_geofield_distance']['group'] = 1;
$handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
$handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Distance';
$handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
$handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'field_geofield_distance';
$handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  7 => 0,
  5 => 0,
  9 => 0,
  6 => 0,
  10 => 0,
  11 => 0,
  12 => 0,
  8 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_geofield_distance']['source'] = 'geocoder';
$handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_geofield';
$handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_geofield';
/* Filter criterion: Job Type */
$handler->display->display_options['filters']['field_job_type_value']['id'] = 'field_job_type_value';
$handler->display->display_options['filters']['field_job_type_value']['table'] = 'field_data_field_job_type';
$handler->display->display_options['filters']['field_job_type_value']['field'] = 'field_job_type_value';
$handler->display->display_options['filters']['field_job_type_value']['ui_name'] = 'Job Type';
$handler->display->display_options['filters']['field_job_type_value']['group'] = 1;
$handler->display->display_options['filters']['field_job_type_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_job_type_value']['expose']['operator_id'] = 'field_job_type_value_op';
$handler->display->display_options['filters']['field_job_type_value']['expose']['label'] = 'Job Type';
$handler->display->display_options['filters']['field_job_type_value']['expose']['operator'] = 'field_job_type_value_op';
$handler->display->display_options['filters']['field_job_type_value']['expose']['identifier'] = 'field_job_type_value';
$handler->display->display_options['filters']['field_job_type_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  7 => 0,
  5 => 0,
  9 => 0,
  6 => 0,
  10 => 0,
  11 => 0,
  12 => 0,
  8 => 0,
  3 => 0,
);
/* Filter criterion: Content: Preferred Carer Gender (field_preferred_carer_gender) */
$handler->display->display_options['filters']['field_preferred_carer_gender_value']['id'] = 'field_preferred_carer_gender_value';
$handler->display->display_options['filters']['field_preferred_carer_gender_value']['table'] = 'field_data_field_preferred_carer_gender';
$handler->display->display_options['filters']['field_preferred_carer_gender_value']['field'] = 'field_preferred_carer_gender_value';
$handler->display->display_options['filters']['field_preferred_carer_gender_value']['group'] = 1;
$handler->display->display_options['filters']['field_preferred_carer_gender_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_preferred_carer_gender_value']['expose']['operator_id'] = 'field_preferred_carer_gender_value_op';
$handler->display->display_options['filters']['field_preferred_carer_gender_value']['expose']['label'] = 'Preferred Carer Gender';
$handler->display->display_options['filters']['field_preferred_carer_gender_value']['expose']['operator'] = 'field_preferred_carer_gender_value_op';
$handler->display->display_options['filters']['field_preferred_carer_gender_value']['expose']['identifier'] = 'field_preferred_carer_gender_value';
$handler->display->display_options['filters']['field_preferred_carer_gender_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  7 => 0,
  5 => 0,
  9 => 0,
  6 => 0,
  10 => 0,
  11 => 0,
  12 => 0,
  8 => 0,
  3 => 0,
);
/* Filter criterion: Content: Job Hours (field_job_hours) */
$handler->display->display_options['filters']['field_job_hours_tid']['id'] = 'field_job_hours_tid';
$handler->display->display_options['filters']['field_job_hours_tid']['table'] = 'field_data_field_job_hours';
$handler->display->display_options['filters']['field_job_hours_tid']['field'] = 'field_job_hours_tid';
$handler->display->display_options['filters']['field_job_hours_tid']['group'] = 1;
$handler->display->display_options['filters']['field_job_hours_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_job_hours_tid']['expose']['operator_id'] = 'field_job_hours_tid_op';
$handler->display->display_options['filters']['field_job_hours_tid']['expose']['label'] = 'Hours';
$handler->display->display_options['filters']['field_job_hours_tid']['expose']['operator'] = 'field_job_hours_tid_op';
$handler->display->display_options['filters']['field_job_hours_tid']['expose']['identifier'] = 'field_job_hours_tid';
$handler->display->display_options['filters']['field_job_hours_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_job_hours_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  7 => 0,
  5 => 0,
  6 => 0,
  8 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_job_hours_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_job_hours_tid']['vocabulary'] = 'job_hours';
/* Filter criterion: Work Type */
$handler->display->display_options['filters']['field_job_status_tid']['id'] = 'field_job_status_tid';
$handler->display->display_options['filters']['field_job_status_tid']['table'] = 'field_data_field_job_status';
$handler->display->display_options['filters']['field_job_status_tid']['field'] = 'field_job_status_tid';
$handler->display->display_options['filters']['field_job_status_tid']['ui_name'] = 'Work Type';
$handler->display->display_options['filters']['field_job_status_tid']['group'] = 1;
$handler->display->display_options['filters']['field_job_status_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_job_status_tid']['expose']['operator_id'] = 'field_job_status_tid_op';
$handler->display->display_options['filters']['field_job_status_tid']['expose']['label'] = 'Work Type';
$handler->display->display_options['filters']['field_job_status_tid']['expose']['operator'] = 'field_job_status_tid_op';
$handler->display->display_options['filters']['field_job_status_tid']['expose']['identifier'] = 'field_job_status_tid';
$handler->display->display_options['filters']['field_job_status_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_job_status_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  7 => 0,
  5 => 0,
  6 => 0,
  8 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_job_status_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_job_status_tid']['vocabulary'] = 'job_status';
/* Filter criterion: Experience In */
$handler->display->display_options['filters']['field_care_category_tid']['id'] = 'field_care_category_tid';
$handler->display->display_options['filters']['field_care_category_tid']['table'] = 'field_data_field_care_category';
$handler->display->display_options['filters']['field_care_category_tid']['field'] = 'field_care_category_tid';
$handler->display->display_options['filters']['field_care_category_tid']['ui_name'] = 'Experience In';
$handler->display->display_options['filters']['field_care_category_tid']['group'] = 1;
$handler->display->display_options['filters']['field_care_category_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_care_category_tid']['expose']['operator_id'] = 'field_care_category_tid_op';
$handler->display->display_options['filters']['field_care_category_tid']['expose']['label'] = 'Type of Care';
$handler->display->display_options['filters']['field_care_category_tid']['expose']['operator'] = 'field_care_category_tid_op';
$handler->display->display_options['filters']['field_care_category_tid']['expose']['identifier'] = 'field_care_category_tid';
$handler->display->display_options['filters']['field_care_category_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_care_category_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  7 => 0,
  5 => 0,
  9 => 0,
  6 => 0,
  10 => 0,
  11 => 0,
  12 => 0,
  8 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_care_category_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_care_category_tid']['vocabulary'] = 'care_type';
/* Filter criterion: LGBT Care */
$handler->display->display_options['filters']['field_lgbt_care_value']['id'] = 'field_lgbt_care_value';
$handler->display->display_options['filters']['field_lgbt_care_value']['table'] = 'field_data_field_lgbt_care';
$handler->display->display_options['filters']['field_lgbt_care_value']['field'] = 'field_lgbt_care_value';
$handler->display->display_options['filters']['field_lgbt_care_value']['ui_name'] = 'LGBT Care';
$handler->display->display_options['filters']['field_lgbt_care_value']['group'] = 1;
$handler->display->display_options['filters']['field_lgbt_care_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_lgbt_care_value']['expose']['operator_id'] = 'field_lgbt_care_value_op';
$handler->display->display_options['filters']['field_lgbt_care_value']['expose']['label'] = 'LGBT Care';
$handler->display->display_options['filters']['field_lgbt_care_value']['expose']['operator'] = 'field_lgbt_care_value_op';
$handler->display->display_options['filters']['field_lgbt_care_value']['expose']['identifier'] = 'field_lgbt_care_value';
$handler->display->display_options['filters']['field_lgbt_care_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  7 => 0,
  5 => 0,
  6 => 0,
  8 => 0,
  3 => 0,
);
/* Filter criterion: Language */
$handler->display->display_options['filters']['field_language_tid']['id'] = 'field_language_tid';
$handler->display->display_options['filters']['field_language_tid']['table'] = 'field_data_field_language';
$handler->display->display_options['filters']['field_language_tid']['field'] = 'field_language_tid';
$handler->display->display_options['filters']['field_language_tid']['ui_name'] = 'Language';
$handler->display->display_options['filters']['field_language_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_language_tid']['expose']['operator_id'] = 'field_language_tid_op';
$handler->display->display_options['filters']['field_language_tid']['expose']['label'] = 'Language needed';
$handler->display->display_options['filters']['field_language_tid']['expose']['operator'] = 'field_language_tid_op';
$handler->display->display_options['filters']['field_language_tid']['expose']['identifier'] = 'field_language_tid';
$handler->display->display_options['filters']['field_language_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  7 => 0,
  5 => 0,
  9 => 0,
  6 => 0,
  10 => 0,
  11 => 0,
  12 => 0,
  8 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_language_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_language_tid']['vocabulary'] = 'languages';

/* Display: All Jobs - Page */
$handler = $view->new_display('page', 'All Jobs - Page', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Search for Care Jobs';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'carer-list all-items';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: favourite_jobs */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'favourite_jobs';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Relationship: Employer profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
$handler->display->display_options['relationships']['profile']['ui_name'] = 'Employer profile';
$handler->display->display_options['relationships']['profile']['label'] = 'Author Profile';
$handler->display->display_options['relationships']['profile']['bundle_types'] = array(
  'employer' => 'employer',
  'agency' => 'agency',
);
$handler->display->display_options['metatags'] = array(
  'und' => array(
    'title' => array(
      'value' => 'Find Carer Jobs | [current-page:pager][site:name]',
      'default' => '[view:title] | [current-page:pager][site:name]',
    ),
    'description' => array(
      'value' => '[view:description]',
      'default' => '[view:description]',
    ),
    'abstract' => array(
      'value' => '',
    ),
    'keywords' => array(
      'value' => '',
    ),
    'robots' => array(
      'value' => array(
        'index' => 0,
        'follow' => 0,
        'noindex' => 0,
        'nofollow' => 0,
        'noarchive' => 0,
        'nosnippet' => 0,
        'noodp' => 0,
        'noydir' => 0,
        'noimageindex' => 0,
        'notranslate' => 0,
      ),
    ),
    'news_keywords' => array(
      'value' => '',
    ),
    'standout' => array(
      'value' => '',
    ),
    'rating' => array(
      'value' => '',
    ),
    'referrer' => array(
      'value' => '',
    ),
    'rights' => array(
      'value' => '',
    ),
    'image_src' => array(
      'value' => '',
    ),
    'canonical' => array(
      'value' => '[view:url]',
      'default' => '[view:url]',
    ),
    'shortlink' => array(
      'value' => '[current-page:url:unaliased]',
      'default' => '[current-page:url:unaliased]',
    ),
    'publisher' => array(
      'value' => '',
    ),
    'author' => array(
      'value' => '',
    ),
    'original-source' => array(
      'value' => '',
    ),
    'prev' => array(
      'value' => '',
    ),
    'next' => array(
      'value' => '',
    ),
    'content-language' => array(
      'value' => '',
    ),
    'geo.position' => array(
      'value' => '',
    ),
    'geo.placename' => array(
      'value' => '',
    ),
    'geo.region' => array(
      'value' => '',
    ),
    'icbm' => array(
      'value' => '',
    ),
    'refresh' => array(
      'value' => '',
    ),
    'revisit-after' => array(
      'value' => '',
      'period' => '',
    ),
    'pragma' => array(
      'value' => '',
    ),
    'cache-control' => array(
      'value' => '',
    ),
    'expires' => array(
      'value' => '',
    ),
  ),
);
$handler->display->display_options['path'] = 'jobs';

/* Display: Favourite Jobs - Page */
$handler = $view->new_display('page', 'Favourite Jobs - Page', 'page_1');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'carer-list favourite';
$handler->display->display_options['path'] = 'jobs/favourites';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'field_hidden',
  3 => 'text',
  4 => 'list',
  5 => 'taxonomy',
  6 => 'number',
  7 => 'image',
);

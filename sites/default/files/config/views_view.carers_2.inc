<?php
/**
 * @file
 * views_view.carers_2.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'carers_2';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Carers 2';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Carers';
$handler->display->display_options['css_class'] = 'carer-list';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'panels_fields';
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['required'] = TRUE;
$handler->display->display_options['relationships']['profile']['bundle_types'] = array(
  'carer' => 'carer',
);
/* Field: Field: Address - Postal code */
$handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
$handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
$handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_address_postal_code']['exclude'] = TRUE;
/* Field: Field: First Name */
$handler->display->display_options['fields']['field_first_name_em']['id'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['table'] = 'field_data_field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['field'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['relationship'] = 'profile';
/* Field: Field: Last Name */
$handler->display->display_options['fields']['field_last_name_em']['id'] = 'field_last_name_em';
$handler->display->display_options['fields']['field_last_name_em']['table'] = 'field_data_field_last_name_em';
$handler->display->display_options['fields']['field_last_name_em']['field'] = 'field_last_name_em';
$handler->display->display_options['fields']['field_last_name_em']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_last_name_em']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: District */
$handler->display->display_options['fields']['field_district']['id'] = 'field_district';
$handler->display->display_options['fields']['field_district']['table'] = 'field_data_field_district';
$handler->display->display_options['fields']['field_district']['field'] = 'field_district';
$handler->display->display_options['fields']['field_district']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_district']['element_type'] = 'div';
$handler->display->display_options['fields']['field_district']['element_class'] = 'carer-heading';
$handler->display->display_options['fields']['field_district']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['fields']['field_district']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
$handler->display->display_options['fields']['field_district']['field_api_classes'] = TRUE;
/* Field: Display Name */
$handler->display->display_options['fields']['field_surname_initial']['id'] = 'field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['table'] = 'field_data_field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['field'] = 'field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_surname_initial']['ui_name'] = 'Display Name';
$handler->display->display_options['fields']['field_surname_initial']['label'] = '';
$handler->display->display_options['fields']['field_surname_initial']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_surname_initial']['alter']['text'] = '[field_first_name_em] [field_surname_initial]';
$handler->display->display_options['fields']['field_surname_initial']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_surname_initial']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['fields']['field_surname_initial']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Profile: Age */
$handler->display->display_options['fields']['field_age']['id'] = 'field_age';
$handler->display->display_options['fields']['field_age']['table'] = 'field_data_field_age';
$handler->display->display_options['fields']['field_age']['field'] = 'field_age';
$handler->display->display_options['fields']['field_age']['relationship'] = 'profile';
/* Field: Profile: Gender */
$handler->display->display_options['fields']['field_gender_cr']['id'] = 'field_gender_cr';
$handler->display->display_options['fields']['field_gender_cr']['table'] = 'field_data_field_gender_cr';
$handler->display->display_options['fields']['field_gender_cr']['field'] = 'field_gender_cr';
$handler->display->display_options['fields']['field_gender_cr']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_gender_cr']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: Job Type Wanted */
$handler->display->display_options['fields']['field_job_type']['id'] = 'field_job_type';
$handler->display->display_options['fields']['field_job_type']['table'] = 'field_data_field_job_type';
$handler->display->display_options['fields']['field_job_type']['field'] = 'field_job_type';
$handler->display->display_options['fields']['field_job_type']['relationship'] = 'profile';
/* Field: Field: Do you specialise in, or have experience of LGBT care? */
$handler->display->display_options['fields']['field_lgbt_care']['id'] = 'field_lgbt_care';
$handler->display->display_options['fields']['field_lgbt_care']['table'] = 'field_data_field_lgbt_care';
$handler->display->display_options['fields']['field_lgbt_care']['field'] = 'field_lgbt_care';
$handler->display->display_options['fields']['field_lgbt_care']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_lgbt_care']['label'] = 'LGBT Carer';
$handler->display->display_options['fields']['field_lgbt_care']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: Work Type Wanted */
$handler->display->display_options['fields']['field_job_status']['id'] = 'field_job_status';
$handler->display->display_options['fields']['field_job_status']['table'] = 'field_data_field_job_status';
$handler->display->display_options['fields']['field_job_status']['field'] = 'field_job_status';
$handler->display->display_options['fields']['field_job_status']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_job_status']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_job_status']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
$handler->display->display_options['fields']['field_job_status']['delta_offset'] = '0';
/* Field: Profile: Nationality (by country) */
$handler->display->display_options['fields']['field_nationality']['id'] = 'field_nationality';
$handler->display->display_options['fields']['field_nationality']['table'] = 'field_data_field_nationality';
$handler->display->display_options['fields']['field_nationality']['field'] = 'field_nationality';
$handler->display->display_options['fields']['field_nationality']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_nationality']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_nationality']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_availablity']['id'] = 'field_availablity';
$handler->display->display_options['fields']['field_availablity']['table'] = 'field_data_field_availablity';
$handler->display->display_options['fields']['field_availablity']['field'] = 'field_availablity';
$handler->display->display_options['fields']['field_availablity']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_availablity']['label'] = 'Availablity';
/* Field: Field: Job Description */
$handler->display->display_options['fields']['field_description']['id'] = 'field_description';
$handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
$handler->display->display_options['fields']['field_description']['field'] = 'field_description';
$handler->display->display_options['fields']['field_description']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_description']['label'] = 'Personal Statement';
$handler->display->display_options['fields']['field_description']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: Level */
$handler->display->display_options['fields']['field_spoken_english_level']['id'] = 'field_spoken_english_level';
$handler->display->display_options['fields']['field_spoken_english_level']['table'] = 'field_data_field_spoken_english_level';
$handler->display->display_options['fields']['field_spoken_english_level']['field'] = 'field_spoken_english_level';
$handler->display->display_options['fields']['field_spoken_english_level']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_spoken_english_level']['label'] = 'Spoken English Level';
$handler->display->display_options['fields']['field_spoken_english_level']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Profile: Other Spoken Languages */
$handler->display->display_options['fields']['field_other_spoken_languages']['id'] = 'field_other_spoken_languages';
$handler->display->display_options['fields']['field_other_spoken_languages']['table'] = 'field_data_field_other_spoken_languages';
$handler->display->display_options['fields']['field_other_spoken_languages']['field'] = 'field_other_spoken_languages';
$handler->display->display_options['fields']['field_other_spoken_languages']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_other_spoken_languages']['settings'] = array(
  'view_mode' => 'full',
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
$handler->display->display_options['fields']['field_other_spoken_languages']['delta_offset'] = '0';
/* Field: Profile: Do you have a current DBS certificate? */
$handler->display->display_options['fields']['field_dbs_certificate']['id'] = 'field_dbs_certificate';
$handler->display->display_options['fields']['field_dbs_certificate']['table'] = 'field_data_field_dbs_certificate';
$handler->display->display_options['fields']['field_dbs_certificate']['field'] = 'field_dbs_certificate';
$handler->display->display_options['fields']['field_dbs_certificate']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_dbs_certificate']['label'] = 'DBS certificate';
$handler->display->display_options['fields']['field_dbs_certificate']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Profile: References */
$handler->display->display_options['fields']['field_references']['id'] = 'field_references';
$handler->display->display_options['fields']['field_references']['table'] = 'field_data_field_references';
$handler->display->display_options['fields']['field_references']['field'] = 'field_references';
$handler->display->display_options['fields']['field_references']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_references']['label'] = 'References Available';
$handler->display->display_options['fields']['field_references']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: Do you hold a current drivers license? */
$handler->display->display_options['fields']['field_driver_licence_required']['id'] = 'field_driver_licence_required';
$handler->display->display_options['fields']['field_driver_licence_required']['table'] = 'field_data_field_driver_licence_required';
$handler->display->display_options['fields']['field_driver_licence_required']['field'] = 'field_driver_licence_required';
$handler->display->display_options['fields']['field_driver_licence_required']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_driver_licence_required']['label'] = 'Driving Licence';
$handler->display->display_options['fields']['field_driver_licence_required']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Profile: Smoker */
$handler->display->display_options['fields']['field_smoker']['id'] = 'field_smoker';
$handler->display->display_options['fields']['field_smoker']['table'] = 'field_data_field_smoker';
$handler->display->display_options['fields']['field_smoker']['field'] = 'field_smoker';
$handler->display->display_options['fields']['field_smoker']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_smoker']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Field: Geofield (field_geofield) - proximity */
$handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
$handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_geofield';
$handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
$handler->display->display_options['filters']['field_geofield_distance']['relationship'] = 'profile';
$handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
$handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
  'distance' => '25',
  'distance2' => 200,
  'unit' => '3959',
  'origin' => '',
);
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
  6 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_geofield_distance']['source'] = 'geocoder';
$handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_geofield';
$handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_geofield';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'carers';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns'] = '3';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['path'] = 'carers2';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
  2 => 'text',
  3 => 'field_hidden',
  4 => 'number',
  5 => 'list',
  6 => 'taxonomy',
  7 => 'paragraphs',
);

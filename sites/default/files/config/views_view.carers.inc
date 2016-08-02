<?php
/**
 * @file
 * views_view.carers.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'carers';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Carers';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Search for Carers';
$handler->display->display_options['css_class'] = 'carer-list';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'time';
$handler->display->display_options['cache']['results_lifespan'] = '3600';
$handler->display->display_options['cache']['results_lifespan_custom'] = '0';
$handler->display->display_options['cache']['output_lifespan'] = '3600';
$handler->display->display_options['cache']['output_lifespan_custom'] = '0';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
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
$handler->display->display_options['header']['block']['block_to_insert'] = 'block:5';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '<p class="result">Displaying @start - @end of @total</p>';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'There were no carers found';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['required'] = TRUE;
$handler->display->display_options['relationships']['profile']['bundle_types'] = array(
  'carer' => 'carer',
);
/* Relationship: Flags: favourite */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'profile';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'profile';
$handler->display->display_options['relationships']['flag_content_rel']['ui_name'] = 'Favourite';
$handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Favourite';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'favourite';
/* Relationship: Profile: Other Spoken Languages (field_other_spoken_languages) */
$handler->display->display_options['relationships']['field_other_spoken_languages_value']['id'] = 'field_other_spoken_languages_value';
$handler->display->display_options['relationships']['field_other_spoken_languages_value']['table'] = 'field_data_field_other_spoken_languages';
$handler->display->display_options['relationships']['field_other_spoken_languages_value']['field'] = 'field_other_spoken_languages_value';
$handler->display->display_options['relationships']['field_other_spoken_languages_value']['relationship'] = 'profile';
$handler->display->display_options['relationships']['field_other_spoken_languages_value']['label'] = 'other_languages';
$handler->display->display_options['relationships']['field_other_spoken_languages_value']['delta'] = '-1';
/* Relationship: Profile: Which areas do you have experience in? (field_experience) */
$handler->display->display_options['relationships']['field_experience_value']['id'] = 'field_experience_value';
$handler->display->display_options['relationships']['field_experience_value']['table'] = 'field_data_field_experience';
$handler->display->display_options['relationships']['field_experience_value']['field'] = 'field_experience_value';
$handler->display->display_options['relationships']['field_experience_value']['relationship'] = 'profile';
$handler->display->display_options['relationships']['field_experience_value']['label'] = 'Experience';
$handler->display->display_options['relationships']['field_experience_value']['delta'] = '-1';
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
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
/* Field: Field: Address - Postal code */
$handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
$handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
$handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_address_postal_code']['exclude'] = TRUE;
/* Field: Display Name */
$handler->display->display_options['fields']['field_surname_initial']['id'] = 'field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['table'] = 'field_data_field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['field'] = 'field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_surname_initial']['ui_name'] = 'Display Name';
$handler->display->display_options['fields']['field_surname_initial']['label'] = '';
$handler->display->display_options['fields']['field_surname_initial']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_surname_initial']['alter']['text'] = '<i class="fa fa-user"></i>&nbsp;&nbsp; [field_first_name_em] [field_surname_initial]';
$handler->display->display_options['fields']['field_surname_initial']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_surname_initial']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['fields']['field_surname_initial']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Full Name */
$handler->display->display_options['fields']['field_first_name_em_1']['id'] = 'field_first_name_em_1';
$handler->display->display_options['fields']['field_first_name_em_1']['table'] = 'field_data_field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em_1']['field'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em_1']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_first_name_em_1']['ui_name'] = 'Full Name';
$handler->display->display_options['fields']['field_first_name_em_1']['label'] = '';
$handler->display->display_options['fields']['field_first_name_em_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_first_name_em_1']['alter']['text'] = '<a href="profile-carer/[uid]">[field_first_name_em] [field_last_name_em]</a>';
$handler->display->display_options['fields']['field_first_name_em_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_first_name_em_1']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Full details */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Full details';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="profile-carer/[uid]" class="btn btn-primary" type="button">View full profile ></a>';
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
/* Field: Send message */
$handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
$handler->display->display_options['fields']['nothing_2']['table'] = 'views';
$handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Send message';
$handler->display->display_options['fields']['nothing_2']['label'] = '';
$handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<a href="/node/add/message?field_to=[uid]" class="btn btn-primary" type="button">Send Message</a>';
$handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flagging';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
/* Field: Field: Geofield (field_geofield) - proximity */
$handler->display->display_options['fields']['field_geofield_distance']['id'] = 'field_geofield_distance';
$handler->display->display_options['fields']['field_geofield_distance']['table'] = 'field_data_field_geofield';
$handler->display->display_options['fields']['field_geofield_distance']['field'] = 'field_geofield_distance';
$handler->display->display_options['fields']['field_geofield_distance']['relationship'] = 'profile';
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
/* Field: Field: District */
$handler->display->display_options['fields']['field_district']['id'] = 'field_district';
$handler->display->display_options['fields']['field_district']['table'] = 'field_data_field_district';
$handler->display->display_options['fields']['field_district']['field'] = 'field_district';
$handler->display->display_options['fields']['field_district']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_district']['label'] = 'Location';
$handler->display->display_options['fields']['field_district']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['fields']['field_district']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
$handler->display->display_options['fields']['field_district']['field_api_classes'] = TRUE;
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
/* Field: Profile: Which areas do you have experience in? */
$handler->display->display_options['fields']['field_experience']['id'] = 'field_experience';
$handler->display->display_options['fields']['field_experience']['table'] = 'field_data_field_experience';
$handler->display->display_options['fields']['field_experience']['field'] = 'field_experience';
$handler->display->display_options['fields']['field_experience']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_experience']['label'] = 'Care type experience';
$handler->display->display_options['fields']['field_experience']['empty'] = 'Not entered';
$handler->display->display_options['fields']['field_experience']['settings'] = array(
  'view_mode' => 'full',
  'field_formatter_label' => '',
);
$handler->display->display_options['fields']['field_experience']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_experience']['multi_type'] = 'ul';
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
$handler->display->display_options['fields']['field_other_spoken_languages']['label'] = 'Other Languages';
$handler->display->display_options['fields']['field_other_spoken_languages']['settings'] = array(
  'view_mode' => 'languages_list',
  'field_formatter_label' => '',
);
$handler->display->display_options['fields']['field_other_spoken_languages']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_other_spoken_languages']['multi_type'] = 'ul';
$handler->display->display_options['fields']['field_other_spoken_languages']['separator'] = '';
/* Field: Field: Job Type Wanted */
$handler->display->display_options['fields']['field_job_type']['id'] = 'field_job_type';
$handler->display->display_options['fields']['field_job_type']['table'] = 'field_data_field_job_type';
$handler->display->display_options['fields']['field_job_type']['field'] = 'field_job_type';
$handler->display->display_options['fields']['field_job_type']['relationship'] = 'profile';
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
/* Field: Profile: Availability */
$handler->display->display_options['fields']['field_availability']['id'] = 'field_availability';
$handler->display->display_options['fields']['field_availability']['table'] = 'field_data_field_availability';
$handler->display->display_options['fields']['field_availability']['field'] = 'field_availability';
$handler->display->display_options['fields']['field_availability']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_availability']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_availability']['settings'] = array(
  'field_formatter_label' => '',
);
$handler->display->display_options['fields']['field_availability']['delta_offset'] = '0';
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
/* Field: Profile: Smoker */
$handler->display->display_options['fields']['field_smoker']['id'] = 'field_smoker';
$handler->display->display_options['fields']['field_smoker']['table'] = 'field_data_field_smoker';
$handler->display->display_options['fields']['field_smoker']['field'] = 'field_smoker';
$handler->display->display_options['fields']['field_smoker']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_smoker']['settings'] = array(
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
$handler->display->display_options['sorts']['field_geofield_distance']['relationship'] = 'profile';
$handler->display->display_options['sorts']['field_geofield_distance']['source'] = 'exposed_geofield_filter';
$handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_manual'] = array(
  'lat' => '',
  'lon' => '',
);
$handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_geofield';
$handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_geofield';
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
/* Filter criterion: Profile: Profile (field_profile_active) */
$handler->display->display_options['filters']['field_profile_active_value']['id'] = 'field_profile_active_value';
$handler->display->display_options['filters']['field_profile_active_value']['table'] = 'field_data_field_profile_active';
$handler->display->display_options['filters']['field_profile_active_value']['field'] = 'field_profile_active_value';
$handler->display->display_options['filters']['field_profile_active_value']['relationship'] = 'profile';
$handler->display->display_options['filters']['field_profile_active_value']['value'] = array(
  1 => '1',
);
$handler->display->display_options['filters']['field_profile_active_value']['group'] = 1;
/* Filter criterion: Gender */
$handler->display->display_options['filters']['field_gender_cr_value']['id'] = 'field_gender_cr_value';
$handler->display->display_options['filters']['field_gender_cr_value']['table'] = 'field_data_field_gender_cr';
$handler->display->display_options['filters']['field_gender_cr_value']['field'] = 'field_gender_cr_value';
$handler->display->display_options['filters']['field_gender_cr_value']['relationship'] = 'profile';
$handler->display->display_options['filters']['field_gender_cr_value']['ui_name'] = 'Gender';
$handler->display->display_options['filters']['field_gender_cr_value']['group'] = 1;
$handler->display->display_options['filters']['field_gender_cr_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_gender_cr_value']['expose']['operator_id'] = 'field_gender_cr_value_op';
$handler->display->display_options['filters']['field_gender_cr_value']['expose']['label'] = 'Gender';
$handler->display->display_options['filters']['field_gender_cr_value']['expose']['operator'] = 'field_gender_cr_value_op';
$handler->display->display_options['filters']['field_gender_cr_value']['expose']['identifier'] = 'field_gender_cr_value';
$handler->display->display_options['filters']['field_gender_cr_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  7 => 0,
  5 => 0,
  6 => 0,
  8 => 0,
  3 => 0,
);
/* Filter criterion: Job Type */
$handler->display->display_options['filters']['field_job_type_value']['id'] = 'field_job_type_value';
$handler->display->display_options['filters']['field_job_type_value']['table'] = 'field_data_field_job_type';
$handler->display->display_options['filters']['field_job_type_value']['field'] = 'field_job_type_value';
$handler->display->display_options['filters']['field_job_type_value']['relationship'] = 'profile';
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
  6 => 0,
  8 => 0,
  3 => 0,
);
/* Filter criterion: Experience */
$handler->display->display_options['filters']['field_care_category_tid_1']['id'] = 'field_care_category_tid_1';
$handler->display->display_options['filters']['field_care_category_tid_1']['table'] = 'field_data_field_care_category';
$handler->display->display_options['filters']['field_care_category_tid_1']['field'] = 'field_care_category_tid';
$handler->display->display_options['filters']['field_care_category_tid_1']['relationship'] = 'field_experience_value';
$handler->display->display_options['filters']['field_care_category_tid_1']['ui_name'] = 'Experience';
$handler->display->display_options['filters']['field_care_category_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_care_category_tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_care_category_tid_1']['expose']['operator_id'] = 'field_care_category_tid_1_op';
$handler->display->display_options['filters']['field_care_category_tid_1']['expose']['label'] = 'Type of Care';
$handler->display->display_options['filters']['field_care_category_tid_1']['expose']['operator'] = 'field_care_category_tid_1_op';
$handler->display->display_options['filters']['field_care_category_tid_1']['expose']['identifier'] = 'field_care_category_tid_1';
$handler->display->display_options['filters']['field_care_category_tid_1']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_care_category_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_care_category_tid_1']['vocabulary'] = 'care_type';
/* Filter criterion: Profile: Availability (field_availability) */
$handler->display->display_options['filters']['field_availability_tid']['id'] = 'field_availability_tid';
$handler->display->display_options['filters']['field_availability_tid']['table'] = 'field_data_field_availability';
$handler->display->display_options['filters']['field_availability_tid']['field'] = 'field_availability_tid';
$handler->display->display_options['filters']['field_availability_tid']['relationship'] = 'profile';
$handler->display->display_options['filters']['field_availability_tid']['value'] = '';
$handler->display->display_options['filters']['field_availability_tid']['group'] = 1;
$handler->display->display_options['filters']['field_availability_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_availability_tid']['expose']['operator_id'] = 'field_availability_tid_op';
$handler->display->display_options['filters']['field_availability_tid']['expose']['label'] = 'Availability';
$handler->display->display_options['filters']['field_availability_tid']['expose']['operator'] = 'field_availability_tid_op';
$handler->display->display_options['filters']['field_availability_tid']['expose']['identifier'] = 'field_availability_tid';
$handler->display->display_options['filters']['field_availability_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_availability_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_availability_tid']['vocabulary'] = 'availability';
/* Filter criterion: Field: Work Type Wanted (field_job_status) */
$handler->display->display_options['filters']['field_job_status_tid']['id'] = 'field_job_status_tid';
$handler->display->display_options['filters']['field_job_status_tid']['table'] = 'field_data_field_job_status';
$handler->display->display_options['filters']['field_job_status_tid']['field'] = 'field_job_status_tid';
$handler->display->display_options['filters']['field_job_status_tid']['relationship'] = 'profile';
$handler->display->display_options['filters']['field_job_status_tid']['group'] = 1;
$handler->display->display_options['filters']['field_job_status_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_job_status_tid']['expose']['operator_id'] = 'field_job_status_tid_op';
$handler->display->display_options['filters']['field_job_status_tid']['expose']['label'] = 'Work Type';
$handler->display->display_options['filters']['field_job_status_tid']['expose']['operator'] = 'field_job_status_tid_op';
$handler->display->display_options['filters']['field_job_status_tid']['expose']['identifier'] = 'field_job_status_tid';
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
/* Filter criterion: Spoken English Level */
$handler->display->display_options['filters']['field_spoken_english_level_value']['id'] = 'field_spoken_english_level_value';
$handler->display->display_options['filters']['field_spoken_english_level_value']['table'] = 'field_data_field_spoken_english_level';
$handler->display->display_options['filters']['field_spoken_english_level_value']['field'] = 'field_spoken_english_level_value';
$handler->display->display_options['filters']['field_spoken_english_level_value']['relationship'] = 'profile';
$handler->display->display_options['filters']['field_spoken_english_level_value']['ui_name'] = 'Spoken English Level';
$handler->display->display_options['filters']['field_spoken_english_level_value']['group'] = 1;
$handler->display->display_options['filters']['field_spoken_english_level_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_spoken_english_level_value']['expose']['operator_id'] = 'field_spoken_english_level_value_op';
$handler->display->display_options['filters']['field_spoken_english_level_value']['expose']['label'] = 'Spoken English Level';
$handler->display->display_options['filters']['field_spoken_english_level_value']['expose']['operator'] = 'field_spoken_english_level_value_op';
$handler->display->display_options['filters']['field_spoken_english_level_value']['expose']['identifier'] = 'field_spoken_english_level_value';
$handler->display->display_options['filters']['field_spoken_english_level_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  7 => 0,
  5 => 0,
  6 => 0,
  8 => 0,
  3 => 0,
);
/* Filter criterion: Other Languages */
$handler->display->display_options['filters']['field_language_tid']['id'] = 'field_language_tid';
$handler->display->display_options['filters']['field_language_tid']['table'] = 'field_data_field_language';
$handler->display->display_options['filters']['field_language_tid']['field'] = 'field_language_tid';
$handler->display->display_options['filters']['field_language_tid']['relationship'] = 'field_other_spoken_languages_value';
$handler->display->display_options['filters']['field_language_tid']['ui_name'] = 'Other Languages';
$handler->display->display_options['filters']['field_language_tid']['group'] = 1;
$handler->display->display_options['filters']['field_language_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_language_tid']['expose']['operator_id'] = 'field_language_tid_op';
$handler->display->display_options['filters']['field_language_tid']['expose']['label'] = 'Other Languages';
$handler->display->display_options['filters']['field_language_tid']['expose']['operator'] = 'field_language_tid_op';
$handler->display->display_options['filters']['field_language_tid']['expose']['identifier'] = 'field_language_tid';
$handler->display->display_options['filters']['field_language_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  7 => 0,
  5 => 0,
  6 => 0,
  8 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_language_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_language_tid']['vocabulary'] = 'languages';
/* Filter criterion: Qualifications */
$handler->display->display_options['filters']['field_care_qualifications_tid']['id'] = 'field_care_qualifications_tid';
$handler->display->display_options['filters']['field_care_qualifications_tid']['table'] = 'field_data_field_care_qualifications';
$handler->display->display_options['filters']['field_care_qualifications_tid']['field'] = 'field_care_qualifications_tid';
$handler->display->display_options['filters']['field_care_qualifications_tid']['relationship'] = 'profile';
$handler->display->display_options['filters']['field_care_qualifications_tid']['ui_name'] = 'Qualifications';
$handler->display->display_options['filters']['field_care_qualifications_tid']['group'] = 1;
$handler->display->display_options['filters']['field_care_qualifications_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_care_qualifications_tid']['expose']['operator_id'] = 'field_care_qualifications_tid_op';
$handler->display->display_options['filters']['field_care_qualifications_tid']['expose']['label'] = 'Qualifications';
$handler->display->display_options['filters']['field_care_qualifications_tid']['expose']['operator'] = 'field_care_qualifications_tid_op';
$handler->display->display_options['filters']['field_care_qualifications_tid']['expose']['identifier'] = 'field_care_qualifications_tid';
$handler->display->display_options['filters']['field_care_qualifications_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_care_qualifications_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_care_qualifications_tid']['vocabulary'] = 'care_qualifications';
/* Filter criterion: LGBT */
$handler->display->display_options['filters']['field_lgbt_care_value']['id'] = 'field_lgbt_care_value';
$handler->display->display_options['filters']['field_lgbt_care_value']['table'] = 'field_data_field_lgbt_care';
$handler->display->display_options['filters']['field_lgbt_care_value']['field'] = 'field_lgbt_care_value';
$handler->display->display_options['filters']['field_lgbt_care_value']['relationship'] = 'profile';
$handler->display->display_options['filters']['field_lgbt_care_value']['ui_name'] = 'LGBT';
$handler->display->display_options['filters']['field_lgbt_care_value']['group'] = 1;
$handler->display->display_options['filters']['field_lgbt_care_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_lgbt_care_value']['expose']['operator_id'] = 'field_lgbt_care_value_op';
$handler->display->display_options['filters']['field_lgbt_care_value']['expose']['label'] = 'LGBT Carer';
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

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'carer-list all-items';
$handler->display->display_options['path'] = 'carers';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'Carers';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['weight'] = '0';

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

/* Display: Carers Test */
$handler = $view->new_display('page', 'Carers Test', 'page_2');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['required'] = TRUE;
$handler->display->display_options['relationships']['profile']['bundle_types'] = array(
  'carer' => 'carer',
);
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
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
/* Field: Field: Address - Postal code */
$handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
$handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
$handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_address_postal_code']['exclude'] = TRUE;
/* Field: Full details */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Full details';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="profile-carer/[uid]" class="btn btn-primary" type="button">View full profile ></a>';
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
/* Field: Display Name */
$handler->display->display_options['fields']['field_surname_initial']['id'] = 'field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['table'] = 'field_data_field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['field'] = 'field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_surname_initial']['ui_name'] = 'Display Name';
$handler->display->display_options['fields']['field_surname_initial']['label'] = '';
$handler->display->display_options['fields']['field_surname_initial']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_surname_initial']['alter']['text'] = '<i class="fa fa-user"></i>&nbsp;&nbsp; [field_first_name_em] [field_surname_initial]';
$handler->display->display_options['fields']['field_surname_initial']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_surname_initial']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['fields']['field_surname_initial']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Full Name */
$handler->display->display_options['fields']['field_first_name_em_1']['id'] = 'field_first_name_em_1';
$handler->display->display_options['fields']['field_first_name_em_1']['table'] = 'field_data_field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em_1']['field'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em_1']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_first_name_em_1']['ui_name'] = 'Full Name';
$handler->display->display_options['fields']['field_first_name_em_1']['label'] = '';
$handler->display->display_options['fields']['field_first_name_em_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_first_name_em_1']['alter']['text'] = '<a href="profile-carer/[uid]">[field_first_name_em] [field_last_name_em]</a>';
$handler->display->display_options['fields']['field_first_name_em_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_first_name_em_1']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: District */
$handler->display->display_options['fields']['field_district']['id'] = 'field_district';
$handler->display->display_options['fields']['field_district']['table'] = 'field_data_field_district';
$handler->display->display_options['fields']['field_district']['field'] = 'field_district';
$handler->display->display_options['fields']['field_district']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_district']['label'] = 'Location';
$handler->display->display_options['fields']['field_district']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['fields']['field_district']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
$handler->display->display_options['fields']['field_district']['field_api_classes'] = TRUE;
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
$handler->display->display_options['fields']['field_other_spoken_languages']['label'] = '';
$handler->display->display_options['fields']['field_other_spoken_languages']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_other_spoken_languages']['settings'] = array(
  'view_mode' => 'full',
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
$handler->display->display_options['fields']['field_other_spoken_languages']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_other_spoken_languages']['separator'] = '';
/* Field: Field: Job Type Wanted */
$handler->display->display_options['fields']['field_job_type']['id'] = 'field_job_type';
$handler->display->display_options['fields']['field_job_type']['table'] = 'field_data_field_job_type';
$handler->display->display_options['fields']['field_job_type']['field'] = 'field_job_type';
$handler->display->display_options['fields']['field_job_type']['relationship'] = 'profile';
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
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_availablity']['id'] = 'field_availablity';
$handler->display->display_options['fields']['field_availablity']['table'] = 'field_data_field_availablity';
$handler->display->display_options['fields']['field_availablity']['field'] = 'field_availablity';
$handler->display->display_options['fields']['field_availablity']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_availablity']['label'] = 'Availablity';
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
/* Field: Profile: Smoker */
$handler->display->display_options['fields']['field_smoker']['id'] = 'field_smoker';
$handler->display->display_options['fields']['field_smoker']['table'] = 'field_data_field_smoker';
$handler->display->display_options['fields']['field_smoker']['field'] = 'field_smoker';
$handler->display->display_options['fields']['field_smoker']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_smoker']['settings'] = array(
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
$handler->display->display_options['path'] = 'carers-test';

/* Display: Favourites */
$handler = $view->new_display('page', 'Favourites', 'page_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Favourite Carers';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'carer-list favourite';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['required'] = TRUE;
$handler->display->display_options['relationships']['profile']['bundle_types'] = array(
  'carer' => 'carer',
);
/* Relationship: Flags: favourite */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'profile';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'profile';
$handler->display->display_options['relationships']['flag_content_rel']['ui_name'] = 'Favourite';
$handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Favourite';
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'favourite';
/* Relationship: Profile: Other Spoken Languages (field_other_spoken_languages) */
$handler->display->display_options['relationships']['field_other_spoken_languages_value']['id'] = 'field_other_spoken_languages_value';
$handler->display->display_options['relationships']['field_other_spoken_languages_value']['table'] = 'field_data_field_other_spoken_languages';
$handler->display->display_options['relationships']['field_other_spoken_languages_value']['field'] = 'field_other_spoken_languages_value';
$handler->display->display_options['relationships']['field_other_spoken_languages_value']['relationship'] = 'profile';
$handler->display->display_options['relationships']['field_other_spoken_languages_value']['label'] = 'other_languages';
$handler->display->display_options['relationships']['field_other_spoken_languages_value']['delta'] = '-1';
$handler->display->display_options['path'] = 'carers/favourites';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'Favourites';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
  2 => 'text',
  3 => 'field_hidden',
  4 => 'number',
  5 => 'list',
  6 => 'paragraphs',
  7 => 'taxonomy',
);

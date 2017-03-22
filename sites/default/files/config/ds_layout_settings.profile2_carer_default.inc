<?php
/**
 * @file
 * ds_layout_settings.profile2_carer_default.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'profile2|carer|default';
$ds_layout->entity_type = 'profile2';
$ds_layout->bundle = 'carer';
$ds_layout->view_mode = 'default';
$ds_layout->layout = 'ds_1col_wrapper';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'field_qualifications',
      1 => 'field_profile_active',
      2 => 'field_title_em',
      3 => 'field_care_qualifications',
      4 => 'field_last_name_em',
      5 => 'field_work_experience',
      6 => 'field_gender_cr',
      7 => 'field_age',
      8 => 'field_job_type',
      9 => 'field_nationality',
      10 => 'field_job_status',
      11 => 'field_care_category',
      12 => 'field_spoken_english_level',
      13 => 'field_availablity',
      14 => 'field_driver_licence_required',
      15 => 'field_smoker',
      16 => 'field_dbs_certificate',
      17 => 'field_extended_dbs_certificate',
      18 => 'field_dbs_number',
      19 => 'field_ni_number',
      20 => 'field_work_permit',
      21 => 'field_lgbt_care',
      22 => 'field_description',
    ),
  ),
  'fields' => array(
    'field_qualifications' => 'ds_content',
    'field_profile_active' => 'ds_content',
    'field_title_em' => 'ds_content',
    'field_care_qualifications' => 'ds_content',
    'field_last_name_em' => 'ds_content',
    'field_work_experience' => 'ds_content',
    'field_gender_cr' => 'ds_content',
    'field_age' => 'ds_content',
    'field_job_type' => 'ds_content',
    'field_nationality' => 'ds_content',
    'field_job_status' => 'ds_content',
    'field_care_category' => 'ds_content',
    'field_spoken_english_level' => 'ds_content',
    'field_availablity' => 'ds_content',
    'field_driver_licence_required' => 'ds_content',
    'field_smoker' => 'ds_content',
    'field_dbs_certificate' => 'ds_content',
    'field_extended_dbs_certificate' => 'ds_content',
    'field_dbs_number' => 'ds_content',
    'field_ni_number' => 'ds_content',
    'field_work_permit' => 'ds_content',
    'field_lgbt_care' => 'ds_content',
    'field_description' => 'ds_content',
  ),
  'classes' => array(
    'layout_class' => array(
      '' => '',
    ),
  ),
  'wrappers' => array(
    'ds_content' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => 1,
  'layout_link_attribute' => '',
  'layout_link_custom' => '',
  'hide_page_title' => '0',
  'page_option_title' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);

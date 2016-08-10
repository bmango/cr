<?php
/**
 * @file
 * ds_layout_settings.profile2_carer_carer_details_employer.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'profile2|carer|carer_details_employer';
$ds_layout->entity_type = 'profile2';
$ds_layout->bundle = 'carer';
$ds_layout->view_mode = 'carer_details_employer';
$ds_layout->layout = 'ds_1col_wrapper';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'employer_carers_links',
      1 => 'field_work_experience',
      2 => 'group_personal',
      3 => 'field_qualifications',
      4 => 'field_description',
      5 => 'field_job_type',
      6 => 'field_job_status',
      7 => 'field_availability',
      8 => 'field_care_qualifications',
      9 => 'field_ni_number',
      10 => 'group_work',
      11 => 'group_experience',
      12 => 'field_work_permit',
      13 => 'group_qualifications',
      14 => 'field_dbs_certificate',
      15 => 'field_dbs_number',
      16 => 'field_extended_dbs_certificate',
      17 => 'field_lgbt_care',
      18 => 'field_references',
      19 => 'group_top',
      20 => 'send_message',
      21 => 'flag_favourite',
      22 => 'field_district',
      23 => 'field_title_em',
      24 => 'field_first_name_em',
      25 => 'field_nationality',
      26 => 'field_age',
      27 => 'field_gender_cr',
      28 => 'field_smoker',
      29 => 'field_driver_licence_required',
      30 => 'field_spoken_english_level',
      31 => 'field_other_spoken_languages',
    ),
  ),
  'fields' => array(
    'employer_carers_links' => 'ds_content',
    'field_work_experience' => 'ds_content',
    'group_personal' => 'ds_content',
    'field_qualifications' => 'ds_content',
    'field_description' => 'ds_content',
    'field_job_type' => 'ds_content',
    'field_job_status' => 'ds_content',
    'field_availability' => 'ds_content',
    'field_care_qualifications' => 'ds_content',
    'field_ni_number' => 'ds_content',
    'group_work' => 'ds_content',
    'group_experience' => 'ds_content',
    'field_work_permit' => 'ds_content',
    'group_qualifications' => 'ds_content',
    'field_dbs_certificate' => 'ds_content',
    'field_dbs_number' => 'ds_content',
    'field_extended_dbs_certificate' => 'ds_content',
    'field_lgbt_care' => 'ds_content',
    'field_references' => 'ds_content',
    'group_top' => 'ds_content',
    'send_message' => 'ds_content',
    'flag_favourite' => 'ds_content',
    'field_district' => 'ds_content',
    'field_title_em' => 'ds_content',
    'field_first_name_em' => 'ds_content',
    'field_nationality' => 'ds_content',
    'field_age' => 'ds_content',
    'field_gender_cr' => 'ds_content',
    'field_smoker' => 'ds_content',
    'field_driver_licence_required' => 'ds_content',
    'field_spoken_english_level' => 'ds_content',
    'field_other_spoken_languages' => 'ds_content',
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
  'layout_disable_css' => FALSE,
  'hide_page_title' => '0',
  'page_option_title' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);

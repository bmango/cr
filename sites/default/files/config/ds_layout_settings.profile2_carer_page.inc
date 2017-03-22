<?php
/**
 * @file
 * ds_layout_settings.profile2_carer_page.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'profile2|carer|page';
$ds_layout->entity_type = 'profile2';
$ds_layout->bundle = 'carer';
$ds_layout->view_mode = 'page';
$ds_layout->layout = 'ds_1col_wrapper';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'carer_membership_active',
      1 => 'field_district',
      2 => 'field_title_em',
      3 => 'carer_profile_active',
      4 => 'field_first_name_em',
      5 => 'group_personal',
      6 => 'group_work',
      7 => 'field_last_name_em',
      8 => 'field_address',
      9 => 'group_qualifications',
      10 => 'group_work_experience',
      11 => 'field_work_experience',
      12 => 'field_nationality',
      13 => 'field_qualifications_intro',
      14 => 'field_age',
      15 => 'field_gender_cr',
      16 => 'field_qualifications',
      17 => 'field_smoker',
      18 => 'field_driver_licence_required',
      19 => 'field_spoken_english_level',
      20 => 'field_other_spoken_languages',
      21 => 'field_description',
      22 => 'field_job_status',
      23 => 'field_job_type',
      24 => 'field_availability',
      25 => 'field_experience',
      26 => 'field_dbs_certificate',
      27 => 'field_extended_dbs_certificate',
      28 => 'field_dbs_number',
      29 => 'field_ni_number',
      30 => 'field_work_permit',
      31 => 'field_lgbt_care',
      32 => 'field_references',
      33 => 'field_care_qualifications',
    ),
  ),
  'fields' => array(
    'carer_membership_active' => 'ds_content',
    'field_district' => 'ds_content',
    'field_title_em' => 'ds_content',
    'carer_profile_active' => 'ds_content',
    'field_first_name_em' => 'ds_content',
    'group_personal' => 'ds_content',
    'group_work' => 'ds_content',
    'field_last_name_em' => 'ds_content',
    'field_address' => 'ds_content',
    'group_qualifications' => 'ds_content',
    'group_work_experience' => 'ds_content',
    'field_work_experience' => 'ds_content',
    'field_nationality' => 'ds_content',
    'field_qualifications_intro' => 'ds_content',
    'field_age' => 'ds_content',
    'field_gender_cr' => 'ds_content',
    'field_qualifications' => 'ds_content',
    'field_smoker' => 'ds_content',
    'field_driver_licence_required' => 'ds_content',
    'field_spoken_english_level' => 'ds_content',
    'field_other_spoken_languages' => 'ds_content',
    'field_description' => 'ds_content',
    'field_job_status' => 'ds_content',
    'field_job_type' => 'ds_content',
    'field_availability' => 'ds_content',
    'field_experience' => 'ds_content',
    'field_dbs_certificate' => 'ds_content',
    'field_extended_dbs_certificate' => 'ds_content',
    'field_dbs_number' => 'ds_content',
    'field_ni_number' => 'ds_content',
    'field_work_permit' => 'ds_content',
    'field_lgbt_care' => 'ds_content',
    'field_references' => 'ds_content',
    'field_care_qualifications' => 'ds_content',
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
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);

<?php
/**
 * @file
 * ds_layout_settings.profile2_carer_employer_employer_details_carer_.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'profile2|carer_employer|employer_details_carer_';
$ds_layout->entity_type = 'profile2';
$ds_layout->bundle = 'carer_employer';
$ds_layout->view_mode = 'employer_details_carer_';
$ds_layout->layout = 'ds_1col_wrapper';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'group_cr_details',
      1 => 'field_gender_cr',
      2 => 'field_date_of_birth',
      3 => 'field_living_arrangements',
      4 => 'field_wheelchair_user',
      5 => 'field_alcohol',
      6 => 'field_pets',
      7 => 'field_smoker',
      8 => 'field_diet',
      9 => 'field_allergies',
    ),
  ),
  'fields' => array(
    'group_cr_details' => 'ds_content',
    'field_gender_cr' => 'ds_content',
    'field_date_of_birth' => 'ds_content',
    'field_living_arrangements' => 'ds_content',
    'field_wheelchair_user' => 'ds_content',
    'field_alcohol' => 'ds_content',
    'field_pets' => 'ds_content',
    'field_smoker' => 'ds_content',
    'field_diet' => 'ds_content',
    'field_allergies' => 'ds_content',
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

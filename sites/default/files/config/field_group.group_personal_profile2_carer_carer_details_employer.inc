<?php
/**
 * @file
 * field_group.group_personal_profile2_carer_carer_details_employer.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_personal|profile2|carer|carer_details_employer';
$field_group->group_name = 'group_personal';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'carer';
$field_group->mode = 'carer_details_employer';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Personal Details',
  'weight' => '3',
  'children' => array(
    0 => 'field_title_em',
    1 => 'field_nationality',
    2 => 'field_spoken_english_level',
    3 => 'field_driver_licence_required',
    4 => 'field_age',
    5 => 'field_gender_cr',
    6 => 'field_smoker',
    7 => 'field_other_spoken_languages',
    8 => 'field_first_name_em',
    9 => 'field_district',
    10 => 'group_top',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Personal Details',
    'instance_settings' => array(
      'id' => '',
      'classes' => 'group-personal field-group-html-element',
      'element' => 'div',
      'show_label' => '0',
      'label_element' => 'h4',
      'attributes' => '',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);

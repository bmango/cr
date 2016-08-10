<?php
/**
 * @file
 * field_group.group_personal_profile2_carer_page.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_personal|profile2|carer|page';
$field_group->group_name = 'group_personal';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'carer';
$field_group->mode = 'page';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Personal Details',
  'weight' => '2',
  'children' => array(
    0 => 'field_title_em',
    1 => 'field_last_name_em',
    2 => 'field_address',
    3 => 'field_nationality',
    4 => 'field_spoken_english_level',
    5 => 'field_driver_licence_required',
    6 => 'field_age',
    7 => 'field_gender_cr',
    8 => 'field_smoker',
    9 => 'field_other_spoken_languages',
    10 => 'field_first_name_em',
    11 => 'field_district',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-personal field-group-fieldset',
      'id' => '',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
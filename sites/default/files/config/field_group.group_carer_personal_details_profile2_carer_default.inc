<?php
/**
 * @file
 * field_group.group_carer_personal_details_profile2_carer_default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_carer_personal_details|profile2|carer|default';
$field_group->group_name = 'group_carer_personal_details';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'carer';
$field_group->mode = 'default';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Personal Details',
  'weight' => '3',
  'children' => array(
    0 => 'field_title_em',
    1 => 'field_last_name_em',
    2 => 'field_nationality',
    3 => 'field_spoken_english_level',
    4 => 'field_driver_licence_required',
    5 => 'field_age',
    6 => 'field_gender_cr',
    7 => 'field_smoker',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'label' => 'Personal Details',
    'instance_settings' => array(
      'id' => '',
      'classes' => 'group-carer-personal-details field-group-fieldset',
      'description' => '',
    ),
    'formatter' => 'collapsible',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);

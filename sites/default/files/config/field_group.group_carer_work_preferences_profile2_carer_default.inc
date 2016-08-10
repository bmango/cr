<?php
/**
 * @file
 * field_group.group_carer_work_preferences_profile2_carer_default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_carer_work_preferences|profile2|carer|default';
$field_group->group_name = 'group_carer_work_preferences';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'carer';
$field_group->mode = 'default';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Work Preferences',
  'weight' => '4',
  'children' => array(
    0 => 'field_description',
    1 => 'field_availablity',
    2 => 'field_job_status',
    3 => 'field_job_type',
    4 => 'field_care_category',
    5 => 'field_dbs_certificate',
    6 => 'field_extended_dbs_certificate',
    7 => 'field_dbs_number',
    8 => 'field_ni_number',
    9 => 'field_work_permit',
    10 => 'field_lgbt_care',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-carer-work-preferences field-group-fieldset',
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

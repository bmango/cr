<?php
/**
 * @file
 * field_group.group_experience_profile2_carer_carer_details_employer.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_experience|profile2|carer|carer_details_employer';
$field_group->group_name = 'group_experience';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'carer';
$field_group->mode = 'carer_details_employer';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Work Experience',
  'weight' => '15',
  'children' => array(
    0 => 'field_work_experience',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-experience field-group-fieldset',
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

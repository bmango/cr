<?php
/**
 * @file
 * field_group.group_carer_qualifications_profile2_carer_default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_carer_qualifications|profile2|carer|default';
$field_group->group_name = 'group_carer_qualifications';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'carer';
$field_group->mode = 'default';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Qualifications',
  'weight' => '5',
  'children' => array(),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-carer-qualifications field-group-fieldset',
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

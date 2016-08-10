<?php
/**
 * @file
 * field_group.group_accordion_profile2_carer_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_accordion|profile2|carer|form';
$field_group->group_name = 'group_accordion';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'carer';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Accordion Group',
  'weight' => '2',
  'children' => array(
    0 => 'group_work',
    1 => 'group_personal',
    2 => 'group_experience',
    3 => 'group_carer_work',
  ),
  'format_type' => 'accordion',
  'format_settings' => array(
    'formatter' => '',
    'instance_settings' => array(
      'effect' => 'none',
      'classes' => 'group-accordion field-group-accordion',
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

<?php
/**
 * @file
 * field_group.group_carer_work_profile2_carer_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_carer_work|profile2|carer|form';
$field_group->group_name = 'group_carer_work';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'carer';
$field_group->mode = 'form';
$field_group->parent_name = 'group_accordion';
$field_group->data = array(
  'label' => 'Past Work Experience',
  'weight' => '4',
  'children' => array(
    0 => 'field_work_experience',
  ),
  'format_type' => 'accordion-item',
  'format_settings' => array(
    'label' => 'Past Work Experience',
    'instance_settings' => array(
      'required_fields' => 1,
      'classes' => 'group-carer-work field-group-accordion-item',
      'description' => '',
    ),
    'formatter' => 'closed',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);

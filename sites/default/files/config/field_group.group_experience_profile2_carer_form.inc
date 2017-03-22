<?php
/**
 * @file
 * field_group.group_experience_profile2_carer_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_experience|profile2|carer|form';
$field_group->group_name = 'group_experience';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'carer';
$field_group->mode = 'form';
$field_group->parent_name = 'group_accordion';
$field_group->data = array(
  'label' => 'Qualifications',
  'weight' => '3',
  'children' => array(
    0 => 'field_qualifications',
    1 => 'field_qualifications_intro',
  ),
  'format_type' => 'accordion-item',
  'format_settings' => array(
    'label' => 'Qualifications',
    'instance_settings' => array(
      'required_fields' => 1,
      'classes' => 'group-experience field-group-accordion-item',
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

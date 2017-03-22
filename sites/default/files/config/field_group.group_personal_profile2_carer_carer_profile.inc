<?php
/**
 * @file
 * field_group.group_personal_profile2_carer_carer_profile.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_personal|profile2|carer|carer_profile';
$field_group->group_name = 'group_personal';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'carer';
$field_group->mode = 'carer_profile';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Personal Details',
  'weight' => '19',
  'children' => array(),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Personal Details',
    'instance_settings' => array(
      'id' => '',
      'classes' => 'group-personal field-group-html-element',
      'element' => 'section',
      'show_label' => '0',
      'label_element' => 'div',
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

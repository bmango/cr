<?php
/**
 * @file
 * field_group.group_top_profile2_carer_carer_details_employer.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_top|profile2|carer|carer_details_employer';
$field_group->group_name = 'group_top';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'carer';
$field_group->mode = 'carer_details_employer';
$field_group->parent_name = 'group_personal';
$field_group->data = array(
  'label' => 'Personal Details',
  'weight' => '28',
  'children' => array(
    0 => 'flag_favourite',
    1 => 'send_message',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Personal Details',
    'instance_settings' => array(
      'id' => '',
      'classes' => 'group-top field-group-html-element',
      'element' => 'div',
      'show_label' => '1',
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

<?php
/**
 * @file
 * field_group.group_cr_details_profile2_carer_employer_employer_details_carer_.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_cr_details|profile2|carer_employer|employer_details_carer_';
$field_group->group_name = 'group_cr_details';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'employer';
$field_group->mode = 'employer_details_carer_';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Care Receiver Details',
  'weight' => '0',
  'children' => array(
    0 => 'field_gender_cr',
    1 => 'field_living_arrangements',
    2 => 'field_wheelchair_user',
    3 => 'field_alcohol',
    4 => 'field_pets',
    5 => 'field_smoker',
    6 => 'field_diet',
    7 => 'field_allergies',
    8 => 'field_age',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'formatter' => '',
    'instance_settings' => array(
      'element' => 'div',
      'show_label' => 0,
      'label_element' => 'div',
      'classes' => 'group-cr-details field-group-html-element',
      'attributes' => '',
      'required_fields' => 1,
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

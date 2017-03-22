<?php
/**
 * @file
 * field_group.group_cr_details_profile2_carer_employer_default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_cr_details|profile2|carer_employer|default';
$field_group->group_name = 'group_cr_details';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'employer';
$field_group->mode = 'default';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Carer Receiver Details ',
  'weight' => '1',
  'children' => array(
    0 => 'field_first_name_cr',
    1 => 'field_last_name_cr',
    2 => 'field_title_em',
    3 => 'field_gender_cr',
    4 => 'field_living_arrangements',
    5 => 'field_wheelchair_user',
    6 => 'field_alcohol',
    7 => 'field_pets',
    8 => 'field_smoker',
    9 => 'field_diet',
    10 => 'field_allergies',
    11 => 'field_cr_intro',
    12 => 'field_age',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => '',
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

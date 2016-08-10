<?php
/**
 * @file
 * field_group.group_account_details_profile2_carer_employer_default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_account_details|profile2|carer_employer|default';
$field_group->group_name = 'group_account_details';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'employer';
$field_group->mode = 'default';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Account Details',
  'weight' => '2',
  'children' => array(),
  'format_type' => 'accordion',
  'format_settings' => array(
    'formatter' => '',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-account-details field-group-accordion',
      'effect' => 'bounceslide',
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

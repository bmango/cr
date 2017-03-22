<?php
/**
 * @file
 * field_group.group_account_details_profile2_carer_employer_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_account_details|profile2|carer_employer|form';
$field_group->group_name = 'group_account_details';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'employer';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => '',
  'weight' => '1',
  'children' => array(
    0 => 'group_cr_details',
    1 => 'group_representative',
  ),
  'format_type' => 'accordion',
  'format_settings' => array(
    'label' => '',
    'instance_settings' => array(
      'classes' => 'group-account-details field-group-accordion',
      'effect' => 'none',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);

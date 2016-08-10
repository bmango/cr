<?php
/**
 * @file
 * field_group.group_representative_profile2_carer_employer_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_representative|profile2|carer_employer|form';
$field_group->group_name = 'group_representative';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'employer';
$field_group->mode = 'form';
$field_group->parent_name = 'group_account_details';
$field_group->data = array(
  'label' => 'Your Details',
  'weight' => '12',
  'children' => array(
    0 => 'field_title_em',
    1 => 'field_first_name_em',
    2 => 'field_last_name_em',
    3 => 'field_relationship_em',
  ),
  'format_type' => 'accordion-item',
  'format_settings' => array(
    'label' => 'Your Details',
    'instance_settings' => array(
      'required_fields' => 1,
      'classes' => 'group-representative field-group-accordion-item',
      'description' => 'The details of the representative for the person receiving care, eg son or daughter if care receiver is mother or father',
    ),
    'formatter' => 'open',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);

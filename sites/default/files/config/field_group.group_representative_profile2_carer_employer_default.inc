<?php
/**
 * @file
 * field_group.group_representative_profile2_carer_employer_default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_representative|profile2|carer_employer|default';
$field_group->group_name = 'group_representative';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'employer';
$field_group->mode = 'default';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Representative Details',
  'weight' => '0',
  'children' => array(
    0 => 'field_title_cr',
    1 => 'field_first_name_em',
    2 => 'field_last_name_em',
    3 => 'field_relationship_em',
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

<?php
/**
 * @file
 * field_group.group_agency_node_job_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_agency|node|job|form';
$field_group->group_name = 'group_agency';
$field_group->entity_type = 'node';
$field_group->bundle = 'job';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Agency Details',
  'weight' => '19',
  'children' => array(
    0 => 'field_agency_contact',
    1 => 'field_agency_contact_phone',
    2 => 'field_agency_contact_email',
    3 => 'field_agency_contact_link',
    4 => 'field_ni_number',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-agency field-group-fieldset',
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

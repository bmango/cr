<?php
/**
 * @file
 * field_group.group_work_profile2_carer_carer_details_employer.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_work|profile2|carer|carer_details_employer';
$field_group->group_name = 'group_work';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'carer';
$field_group->mode = 'carer_details_employer';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Work Details',
  'weight' => '14',
  'children' => array(
    0 => 'field_description',
    1 => 'field_job_status',
    2 => 'field_job_type',
    3 => 'field_dbs_certificate',
    4 => 'field_extended_dbs_certificate',
    5 => 'field_dbs_number',
    6 => 'field_ni_number',
    7 => 'field_work_permit',
    8 => 'field_lgbt_care',
    9 => 'field_care_qualifications',
    10 => 'field_references',
    11 => 'field_availability',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-work field-group-fieldset',
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

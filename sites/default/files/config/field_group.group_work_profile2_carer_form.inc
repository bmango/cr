<?php
/**
 * @file
 * field_group.group_work_profile2_carer_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_work|profile2|carer|form';
$field_group->group_name = 'group_work';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'carer';
$field_group->mode = 'form';
$field_group->parent_name = 'group_accordion';
$field_group->data = array(
  'label' => 'Work Details',
  'weight' => '2',
  'children' => array(
    0 => 'field_description',
    1 => 'field_job_status',
    2 => 'field_job_type',
    3 => 'field_care_category',
    4 => 'field_dbs_certificate',
    5 => 'field_extended_dbs_certificate',
    6 => 'field_dbs_number',
    7 => 'field_ni_number',
    8 => 'field_work_permit',
    9 => 'field_lgbt_care',
    10 => 'field_care_qualifications',
    11 => 'field_references',
    12 => 'field_availability',
    13 => 'field_experience',
  ),
  'format_type' => 'accordion-item',
  'format_settings' => array(
    'formatter' => 'closed',
    'instance_settings' => array(
      'description' => '',
      'classes' => '',
      'required_fields' => 1,
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);

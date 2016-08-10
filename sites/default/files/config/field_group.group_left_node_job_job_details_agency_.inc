<?php
/**
 * @file
 * field_group.group_left_node_job_job_details_agency_.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_left|node|job|job_details_agency_';
$field_group->group_name = 'group_left';
$field_group->entity_type = 'node';
$field_group->bundle = 'job';
$field_group->mode = 'job_details_agency_';
$field_group->parent_name = 'group_job';
$field_group->data = array(
  'label' => 'Left',
  'weight' => '56',
  'children' => array(
    0 => 'field_job_type',
    1 => 'field_job_status',
    2 => 'field_care_category',
    3 => 'field_job_hours',
    4 => 'field_pay_basis',
    5 => 'field_preferred_carer_gender',
    6 => 'pay',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'formatter' => '',
    'instance_settings' => array(
      'element' => 'div',
      'show_label' => 0,
      'label_element' => 'div',
      'classes' => 'group-left field-group-html-element',
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

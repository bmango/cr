<?php
/**
 * @file
 * field_group.group_right_node_job_job_details_agency_view.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_right|node|job|job_details_agency_view';
$field_group->group_name = 'group_right';
$field_group->entity_type = 'node';
$field_group->bundle = 'job';
$field_group->mode = 'job_details_agency_view';
$field_group->parent_name = 'group_job';
$field_group->data = array(
  'label' => 'Right',
  'weight' => '47',
  'children' => array(
    0 => 'field_driver_licence_required',
    1 => 'field_lgbt_care',
    2 => 'field_job_duties',
    3 => 'field_night_time_assistance',
    4 => 'field_address',
    5 => 'field_language',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'formatter' => '',
    'instance_settings' => array(
      'element' => 'div',
      'show_label' => 0,
      'label_element' => 'div',
      'classes' => 'group-right field-group-html-element',
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

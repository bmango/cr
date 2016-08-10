<?php
/**
 * @file
 * field_group.group_top_node_job_job_details_carer.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_top|node|job|job_details_carer';
$field_group->group_name = 'group_top';
$field_group->entity_type = 'node';
$field_group->bundle = 'job';
$field_group->mode = 'job_details_carer';
$field_group->parent_name = 'group_job';
$field_group->data = array(
  'label' => 'Job Details',
  'weight' => '49',
  'children' => array(
    0 => 'flag_favourite_jobs',
    1 => 'send_message',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Job Details',
    'instance_settings' => array(
      'id' => '',
      'classes' => 'group-top field-group-html-element',
      'element' => 'div',
      'show_label' => '1',
      'label_element' => 'div',
      'attributes' => '',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);

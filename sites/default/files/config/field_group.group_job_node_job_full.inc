<?php
/**
 * @file
 * field_group.group_job_node_job_full.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_job|node|job|full';
$field_group->group_name = 'group_job';
$field_group->entity_type = 'node';
$field_group->bundle = 'job';
$field_group->mode = 'full';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Job Details',
  'weight' => '0',
  'children' => array(
    0 => 'field_description',
    1 => 'title',
    2 => 'group_left',
    3 => 'group_right',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Job Details',
    'instance_settings' => array(
      'id' => '',
      'classes' => 'group-job field-group-html-element',
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

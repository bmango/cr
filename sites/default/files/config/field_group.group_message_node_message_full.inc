<?php
/**
 * @file
 * field_group.group_message_node_message_full.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_message|node|message|full';
$field_group->group_name = 'group_message';
$field_group->entity_type = 'node';
$field_group->bundle = 'message';
$field_group->mode = 'full';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => '',
  'weight' => '0',
  'children' => array(
    0 => 'field_description',
    1 => 'field_attachment',
    2 => 'test_find_job_entity_view_1',
    3 => 'carer_profile_link_entity_view_1',
    4 => 'from',
    5 => 'profile_name',
    6 => 'sent_date',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'formatter' => '',
    'instance_settings' => array(
      'element' => 'div',
      'show_label' => 0,
      'label_element' => 'div',
      'classes' => 'group-message field-group-html-element',
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

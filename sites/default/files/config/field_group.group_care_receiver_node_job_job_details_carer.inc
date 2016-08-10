<?php
/**
 * @file
 * field_group.group_care_receiver_node_job_job_details_carer.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_care_receiver|node|job|job_details_carer';
$field_group->group_name = 'group_care_receiver';
$field_group->entity_type = 'node';
$field_group->bundle = 'job';
$field_group->mode = 'job_details_carer';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Additional Care Receiver Details',
  'weight' => '3',
  'children' => array(
    0 => 'care_receiver_details_profile_entity_view_1',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Additional Care Receiver Details',
    'instance_settings' => array(
      'id' => '',
      'classes' => 'group-care-receiver field-group-html-element top-bar',
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

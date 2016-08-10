<?php
/**
 * @file
 * field_group.group_agency_node_job_job_details_agency_.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_agency|node|job|job_details_agency_';
$field_group->group_name = 'group_agency';
$field_group->entity_type = 'node';
$field_group->bundle = 'job';
$field_group->mode = 'job_details_agency_';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Agency Details',
  'weight' => '2',
  'children' => array(
    0 => 'field_agency_contact',
    1 => 'field_agency_contact_phone',
    2 => 'field_agency_contact_link',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Agency Details',
    'instance_settings' => array(
      'id' => '',
      'classes' => 'group-agency field-group-html-element',
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

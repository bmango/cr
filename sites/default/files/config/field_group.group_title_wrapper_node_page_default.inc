<?php
/**
 * @file
 * field_group.group_title_wrapper_node_page_default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_title_wrapper|node|page|default';
$field_group->group_name = 'group_title_wrapper';
$field_group->entity_type = 'node';
$field_group->bundle = 'page';
$field_group->mode = 'default';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => '',
  'weight' => '2',
  'children' => array(),
  'format_type' => 'bootstrap_grid_row',
  'format_settings' => array(
    'formatter' => '',
    'instance_settings' => array(
      'classes' => 'group-title-wrapper field-group-bootstrap_grid_row',
      'show_heading' => 0,
      'heading_position' => 0,
      'label_element' => 'h3',
      'description_element' => 'p',
      'description' => '',
      'panelize' => 0,
      'bootstrap_grid_col_xs' => '',
      'bootstrap_grid_col_sm' => '',
      'bootstrap_grid_col_md' => '',
      'bootstrap_grid_col_lg' => '',
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

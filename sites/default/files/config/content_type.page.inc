<?php
/**
 * @file
 * content_type.page.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'page',
  'name' => 'Basic page',
  'description' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__page' => 'variable.field_bundle_settings_node__page',
  'variable.node_options_page' => 'variable.node_options_page',
  'variable.node_preview_page' => 'variable.node_preview_page',
  'variable.node_submitted_page' => 'variable.node_submitted_page',
  'variable.comment_default_per_page_page' => 'variable.comment_default_per_page_page',
  'variable.comment_form_location_page' => 'variable.comment_form_location_page',
  'variable.comment_preview_page' => 'variable.comment_preview_page',
  'variable.comment_subject_field_page' => 'variable.comment_subject_field_page',
);

$optional = array(
  'field.node.body.page' => 'field.node.body.page',
  'field.node.field_image.page' => 'field.node.field_image.page',
  'permission.create_page_content' => 'permission.create_page_content',
  'permission.edit_own_page_content' => 'permission.edit_own_page_content',
  'permission.edit_any_page_content' => 'permission.edit_any_page_content',
  'permission.delete_own_page_content' => 'permission.delete_own_page_content',
  'permission.delete_any_page_content' => 'permission.delete_any_page_content',
);

$modules = array(
  0 => 'node',
);

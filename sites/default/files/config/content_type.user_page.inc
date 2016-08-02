<?php
/**
 * @file
 * content_type.user_page.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'user_page',
  'name' => 'User Page',
  'description' => 'These pages will only be available to logged in users',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.node_options_user_page' => 'variable.node_options_user_page',
  'variable.node_preview_user_page' => 'variable.node_preview_user_page',
  'variable.node_submitted_user_page' => 'variable.node_submitted_user_page',
  'variable.comment_default_per_page_user_page' => 'variable.comment_default_per_page_user_page',
  'variable.comment_form_location_user_page' => 'variable.comment_form_location_user_page',
  'variable.comment_preview_user_page' => 'variable.comment_preview_user_page',
  'variable.comment_subject_field_user_page' => 'variable.comment_subject_field_user_page',
);

$optional = array(
  'field.node.body.user_page' => 'field.node.body.user_page',
  'permission.create_user_page_content' => 'permission.create_user_page_content',
  'permission.edit_own_user_page_content' => 'permission.edit_own_user_page_content',
  'permission.edit_any_user_page_content' => 'permission.edit_any_user_page_content',
  'permission.delete_own_user_page_content' => 'permission.delete_own_user_page_content',
  'permission.delete_any_user_page_content' => 'permission.delete_any_user_page_content',
);

$modules = array(
  0 => 'node',
);

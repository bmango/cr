<?php
/**
 * @file
 * content_type.faq.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'faq',
  'name' => 'FAQ',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__faq' => 'variable.field_bundle_settings_node__faq',
  'variable.node_options_faq' => 'variable.node_options_faq',
  'variable.node_preview_faq' => 'variable.node_preview_faq',
  'variable.node_submitted_faq' => 'variable.node_submitted_faq',
  'variable.comment_default_per_page_faq' => 'variable.comment_default_per_page_faq',
  'variable.comment_form_location_faq' => 'variable.comment_form_location_faq',
  'variable.comment_preview_faq' => 'variable.comment_preview_faq',
  'variable.comment_subject_field_faq' => 'variable.comment_subject_field_faq',
);

$optional = array(
  'field.node.body.faq' => 'field.node.body.faq',
  'field.node.field_section.faq' => 'field.node.field_section.faq',
  'permission.create_faq_content' => 'permission.create_faq_content',
  'permission.edit_own_faq_content' => 'permission.edit_own_faq_content',
  'permission.edit_any_faq_content' => 'permission.edit_any_faq_content',
  'permission.delete_own_faq_content' => 'permission.delete_own_faq_content',
  'permission.delete_any_faq_content' => 'permission.delete_any_faq_content',
);

$modules = array(
  0 => 'node',
);

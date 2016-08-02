<?php
/**
 * @file
 * content_type.message.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'message',
  'name' => 'Message',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Subject',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__message' => 'variable.field_bundle_settings_node__message',
  'variable.node_options_message' => 'variable.node_options_message',
  'variable.node_preview_message' => 'variable.node_preview_message',
  'variable.node_submitted_message' => 'variable.node_submitted_message',
  'variable.comment_default_per_page_message' => 'variable.comment_default_per_page_message',
  'variable.comment_form_location_message' => 'variable.comment_form_location_message',
  'variable.comment_preview_message' => 'variable.comment_preview_message',
  'variable.comment_subject_field_message' => 'variable.comment_subject_field_message',
);

$optional = array(
  'field.node.field_description.message' => 'field.node.field_description.message',
  'field.node.field_to.message' => 'field.node.field_to.message',
  'field.node.field_attachment.message' => 'field.node.field_attachment.message',
  'field.node.field_job.message' => 'field.node.field_job.message',
  'field.node.field_carer.message' => 'field.node.field_carer.message',
  'field.node.field_agency.message' => 'field.node.field_agency.message',
  'permission.create_message_content' => 'permission.create_message_content',
  'permission.edit_own_message_content' => 'permission.edit_own_message_content',
  'permission.edit_any_message_content' => 'permission.edit_any_message_content',
  'permission.delete_own_message_content' => 'permission.delete_own_message_content',
  'permission.delete_any_message_content' => 'permission.delete_any_message_content',
);

$modules = array(
  0 => 'node',
);

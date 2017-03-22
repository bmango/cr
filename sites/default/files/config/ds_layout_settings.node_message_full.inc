<?php
/**
 * @file
 * ds_layout_settings.node_message_full.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|message|full';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'message';
$ds_layout->view_mode = 'full';
$ds_layout->layout = 'ds_1col_wrapper';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'group_message',
      1 => 'test_find_job_entity_view_1',
      2 => 'comments',
      3 => 'carer_profile_link_entity_view_1',
      4 => 'from',
      5 => 'profile_name',
      6 => 'sent_date',
      7 => 'field_description',
      8 => 'field_attachment',
    ),
  ),
  'fields' => array(
    'group_message' => 'ds_content',
    'test_find_job_entity_view_1' => 'ds_content',
    'comments' => 'ds_content',
    'carer_profile_link_entity_view_1' => 'ds_content',
    'from' => 'ds_content',
    'profile_name' => 'ds_content',
    'sent_date' => 'ds_content',
    'field_description' => 'ds_content',
    'field_attachment' => 'ds_content',
  ),
  'classes' => array(
    'layout_class' => array(
      '' => '',
    ),
  ),
  'wrappers' => array(
    'ds_content' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => 1,
  'layout_link_attribute' => '',
  'layout_link_custom' => '',
  'layout_disable_css' => FALSE,
  'hide_page_title' => '0',
  'page_option_title' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);

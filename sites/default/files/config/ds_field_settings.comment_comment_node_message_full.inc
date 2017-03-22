<?php
/**
 * @file
 * ds_field_settings.comment_comment_node_message_full.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'comment|comment_node_message|full';
$ds_fieldsetting->entity_type = 'comment';
$ds_fieldsetting->bundle = 'comment_node_message';
$ds_fieldsetting->view_mode = 'full';
$ds_fieldsetting->settings = array(
  'sent' => array(
    'weight' => '2',
    'label' => 'hidden',
    'format' => 'default',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);

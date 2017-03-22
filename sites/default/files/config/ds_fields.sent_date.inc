<?php
/**
 * @file
 * ds_fields.sent_date.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'sent_date';
$ds_field->label = 'Sent';
$ds_field->field_type = 5;
$ds_field->entities = array(
  'node' => 'node',
);
$ds_field->ui_limit = 'message|*';
$ds_field->properties = array(
  'code' => array(
    'value' => '[node:created:uk_date_time]',
    'format' => 'ds_code',
  ),
  'use_token' => 1,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);

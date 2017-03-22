<?php
/**
 * @file
 * ds_fields.carer_name.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'carer_name';
$ds_field->label = 'Carer Name';
$ds_field->field_type = 5;
$ds_field->entities = array(
  'profile2' => 'profile2',
);
$ds_field->ui_limit = '';
$ds_field->properties = array(
  'code' => array(
    'value' => '[profile2:field-first-name-em] [profile2:field-last-name-em]',
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

<?php
/**
 * @file
 * ds_fields.contact_name.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'contact_name';
$ds_field->label = 'Contact Name';
$ds_field->field_type = 5;
$ds_field->entities = array(
  'node' => 'node',
);
$ds_field->ui_limit = 'job|*';
$ds_field->properties = array(
  'code' => array(
    'value' => '[node:author:profile-employer:field-first-name-em] [node:author:profile-employer:field-surname-initial]',
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

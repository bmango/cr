<?php
/**
 * @file
 * ds_fields.dummy_personal_details.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'dummy_personal_details';
$ds_field->label = 'Dummy Personal Details';
$ds_field->field_type = 5;
$ds_field->entities = array(
  'profile2' => 'profile2',
);
$ds_field->ui_limit = '';
$ds_field->properties = array(
  'code' => array(
    'value' => '<p>Personal Details</p>
',
    'format' => 'filtered_html',
  ),
  'use_token' => 0,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);

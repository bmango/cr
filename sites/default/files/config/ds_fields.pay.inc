<?php
/**
 * @file
 * ds_fields.pay.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'pay';
$ds_field->label = 'Pay';
$ds_field->field_type = 5;
$ds_field->entities = array(
  'node' => 'node',
);
$ds_field->ui_limit = 'job|*';
$ds_field->properties = array(
  'code' => array(
    'value' => '£[node:field-pay] [node:field_pay_rate_basis]',
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

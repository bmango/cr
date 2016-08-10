<?php
/**
 * @file
 * ds_fields.employer_carers_links.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'employer_carers_links';
$ds_field->label = 'Employer Carers Links';
$ds_field->field_type = 6;
$ds_field->entities = array(
  'profile2' => 'profile2',
);
$ds_field->ui_limit = '';
$ds_field->properties = array(
  'block' => 'block|5',
  'block_render' => '1',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);

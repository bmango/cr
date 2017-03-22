<?php
/**
 * @file
 * ds_fields.carer_favourite_links.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'carer_favourite_links';
$ds_field->label = 'Carer Favourite Links';
$ds_field->field_type = 6;
$ds_field->entities = array(
  'node' => 'node',
);
$ds_field->ui_limit = 'job|job_details_carer
job|job_details_agency_';
$ds_field->properties = array(
  'block' => 'block|6',
  'block_render' => '1',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);

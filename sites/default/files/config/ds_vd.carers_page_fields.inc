<?php
/**
 * @file
 * ds_vd.carers_page_fields.inc
 */

$api = '2.0.0';

$data = $ds_vd = new stdClass();
$ds_vd->api_version = 1;
$ds_vd->vd = 'carers-page-fields';
$ds_vd->label = 'Carers: Page (Fields)';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds_extras',
);

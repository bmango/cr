<?php
/**
 * @file
 * ds_view_modes.languages_list.inc
 */

$api = '2.0.0';

$data = $ds_view_mode = new stdClass();
$ds_view_mode->api_version = 1;
$ds_view_mode->view_mode = 'languages_list';
$ds_view_mode->label = 'Languages List';
$ds_view_mode->entities = array(
  'paragraphs_item' => 'paragraphs_item',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);

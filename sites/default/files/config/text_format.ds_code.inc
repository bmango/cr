<?php
/**
 * @file
 * text_format.ds_code.inc
 */

$api = '2.0.0';

$data = (object) array(
  'format' => 'ds_code',
  'name' => 'Display Suite code',
  'cache' => '0',
  'status' => '1',
  'weight' => '-7',
  'filters' => array(
    'ds_code' => array(
      'weight' => '0',
      'status' => '1',
      'settings' => array(),
    ),
  ),
);

$dependencies = array();

$optional = array(
  'permission.use_text_format_ds_code' => 'permission.use_text_format_ds_code',
);

$modules = array(
  0 => 'ds_format',
);

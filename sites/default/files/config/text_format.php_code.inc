<?php
/**
 * @file
 * text_format.php_code.inc
 */

$api = '2.0.0';

$data = (object) array(
  'format' => 'php_code',
  'name' => 'PHP code',
  'cache' => '0',
  'status' => '1',
  'weight' => '11',
  'filters' => array(
    'php_code' => array(
      'weight' => '0',
      'status' => '1',
      'settings' => array(),
    ),
  ),
);

$dependencies = array();

$optional = array(
  'permission.use_text_format_php_code' => 'permission.use_text_format_php_code',
);

$modules = array(
  0 => 'php',
);

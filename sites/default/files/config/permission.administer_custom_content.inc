<?php
/**
 * @file
 * permission.administer_custom_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer custom content',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools_custom_content',
);

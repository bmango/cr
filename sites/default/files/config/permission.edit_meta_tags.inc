<?php
/**
 * @file
 * permission.edit_meta_tags.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit meta tags',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'metatag',
);

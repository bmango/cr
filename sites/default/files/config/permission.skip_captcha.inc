<?php
/**
 * @file
 * permission.skip_captcha.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'skip CAPTCHA',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'captcha',
);

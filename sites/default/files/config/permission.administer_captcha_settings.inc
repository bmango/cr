<?php
/**
 * @file
 * permission.administer_captcha_settings.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer CAPTCHA settings',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'captcha',
);

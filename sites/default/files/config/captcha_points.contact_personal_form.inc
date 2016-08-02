<?php
/**
 * @file
 * captcha_points.contact_personal_form.inc
 */

$api = '2.0.0';

$data = $captcha = new stdClass();
$captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
$captcha->api_version = 1;
$captcha->form_id = 'contact_personal_form';
$captcha->module = '';
$captcha->captcha_type = 'default';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'captcha',
);

<?php
/**
 * @file
 * captcha_points.comment_node_news_form.inc
 */

$api = '2.0.0';

$data = $captcha = new stdClass();
$captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
$captcha->api_version = 1;
$captcha->form_id = 'comment_node_news_form';
$captcha->module = '';
$captcha->captcha_type = '';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'captcha',
);

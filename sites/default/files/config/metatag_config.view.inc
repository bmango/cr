<?php
/**
 * @file
 * metatag_config.view.inc
 */

$api = '2.0.0';

$data = $config = new stdClass();
$config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
$config->api_version = 1;
$config->instance = 'view';
$config->config = array(
  'title' => array(
    'value' => '[view:title] | [current-page:pager][site:name]',
  ),
  'description' => array(
    'value' => '[view:description]',
  ),
  'canonical' => array(
    'value' => '[view:url]',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'metatag',
);

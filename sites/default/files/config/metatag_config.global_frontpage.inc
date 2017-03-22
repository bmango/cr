<?php
/**
 * @file
 * metatag_config.global_frontpage.inc
 */

$api = '2.0.0';

$data = $config = new stdClass();
$config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
$config->api_version = 1;
$config->instance = 'global:frontpage';
$config->config = array(
  'title' => array(
    'value' => '[site:name] | [current-page:pager][site:slogan]',
  ),
  'canonical' => array(
    'value' => '[site:url]',
  ),
  'shortlink' => array(
    'value' => '[site:url]',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'metatag',
);

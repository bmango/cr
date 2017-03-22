<?php
/**
 * @file
 * metatag_config.global.inc
 */

$api = '2.0.0';

$data = $config = new stdClass();
$config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
$config->api_version = 1;
$config->instance = 'global';
$config->config = array(
  'title' => array(
    'value' => '[current-page:title] | [current-page:pager][site:name]',
  ),
  'generator' => array(
    'value' => 'Drupal 7 (http://drupal.org)',
  ),
  'canonical' => array(
    'value' => '[current-page:url:absolute]',
  ),
  'shortlink' => array(
    'value' => '[current-page:url:unaliased]',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'metatag',
);

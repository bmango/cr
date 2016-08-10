<?php
/**
 * @file
 * panels_renderer_pipeline.standard.inc
 */

$api = '2.0.0';

$data = $pipeline = new stdClass();
$pipeline->disabled = FALSE; /* Edit this to true to make a default pipeline disabled initially */
$pipeline->api_version = 1;
$pipeline->name = 'standard';
$pipeline->admin_title = 'Standard';
$pipeline->admin_description = 'Renders a panel normally. This is the most common option.';
$pipeline->weight = -100;
$pipeline->settings = array(
  'renderers' => array(
    0 => array(
      'access' => array(),
      'renderer' => 'standard',
      'options' => array(),
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'panels',
);

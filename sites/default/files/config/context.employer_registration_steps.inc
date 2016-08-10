<?php
/**
 * @file
 * context.employer_registration_steps.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'employer_registration_steps';
$context->description = '';
$context->tag = '';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'employer/register' => 'employer/register',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-3' => array(
        'module' => 'block',
        'delta' => '3',
        'region' => 'highlighted',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 1;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);

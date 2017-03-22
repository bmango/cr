<?php
/**
 * @file
 * variable.field_bundle_settings_node__message.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'field_bundle_settings_node__message',
  'content' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'job_details_carer' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'test_find_job_entity_view_1' => array(
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'test_find_job_entity_view_2' => array(
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'carer_profile_link_entity_view_1' => array(
          'full' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array();

<?php
/**
 * @file
 * variable.field_bundle_settings_node__job.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'field_bundle_settings_node__job',
  'content' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
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
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'job_details_carer' => array(
        'custom_settings' => TRUE,
      ),
      'job_details_agency_' => array(
        'custom_settings' => TRUE,
      ),
      'agency_membership' => array(
        'custom_settings' => FALSE,
      ),
      'job_details_agency_view' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '17',
        ),
      ),
      'display' => array(
        'flag_favourite_jobs' => array(
          'job_details_carer' => array(
            'weight' => '51',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'job_details_agency_' => array(
            'weight' => '57',
            'visible' => TRUE,
          ),
          'job_details_agency_view' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'care_receiver_details_entity_view_1' => array(
          'job_details_carer' => array(
            'weight' => '23',
            'visible' => TRUE,
          ),
          'job_details_agency_' => NULL,
          'job_details_agency_view' => NULL,
        ),
        'care_receiver_details_profile_entity_view_1' => array(
          'job_details_carer' => array(
            'weight' => '23',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'job_details_agency_' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'job_details_agency_view' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array();

<?php
/**
 * @file
 * field.node.field_agency_job.job.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
      'profile2_private' => FALSE,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_agency_job' => array(
              'value' => 'field_agency_job_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_agency_job' => array(
              'value' => 'field_agency_job_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_agency_job',
    'type' => 'field_hidden_text',
    'module' => 'field_hidden',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '255',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Agency Job',
    'widget' => array(
      'weight' => '22',
      'type' => 'field_hidden',
      'module' => 'field_hidden',
      'active' => 0,
      'settings' => array(
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '20',
        'settings' => array(),
      ),
      'job_details_agency_' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '16',
        'settings' => array(),
      ),
      'job_details_carer' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '0',
        'settings' => array(),
      ),
      'job_details_agency_view' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '17',
        'settings' => array(),
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '0',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(
      0 => array(
        'value' => 'No',
      ),
    ),
    'field_name' => 'field_agency_job',
    'entity_type' => 'node',
    'bundle' => 'job',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.job' => 'content_type.job',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'field_hidden',
);

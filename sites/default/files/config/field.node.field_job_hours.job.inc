<?php
/**
 * @file
 * field.node.field_job_hours.job.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'job_hours',
          'parent' => '0',
        ),
      ),
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
            'field_data_field_job_hours' => array(
              'tid' => 'field_job_hours_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_job_hours' => array(
              'tid' => 'field_job_hours_tid',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'tid' => array(
        'table' => 'taxonomy_term_data',
        'columns' => array(
          'tid' => 'tid',
        ),
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'field_name' => 'field_job_hours',
    'type' => 'taxonomy_term_reference',
    'module' => 'taxonomy',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'tid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Job Hours',
    'widget' => array(
      'weight' => '4',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '4',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '9',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'job_details_carer' => array(
        'label' => 'above',
        'type' => 'ds_taxonomy_separator',
        'weight' => '41',
        'settings' => array(
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
          'field_formatter_label' => '',
        ),
        'module' => 'ds',
      ),
      'job_details_agency_' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '37',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'job_details_agency_view' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '30',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_job_hours',
    'entity_type' => 'node',
    'bundle' => 'job',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.job' => 'content_type.job',
  'vocabulary.job_hours' => 'vocabulary.job_hours',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);

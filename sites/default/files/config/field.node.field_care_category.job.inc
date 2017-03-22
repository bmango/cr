<?php
/**
 * @file
 * field.node.field_care_category.job.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'care_type',
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
            'field_data_field_care_category' => array(
              'tid' => 'field_care_category_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_care_category' => array(
              'tid' => 'field_care_category_tid',
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
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_care_category',
    'type' => 'taxonomy_term_reference',
    'module' => 'taxonomy',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
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
    'label' => 'Type of Care',
    'widget' => array(
      'weight' => '1',
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
        'weight' => '3',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '8',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'job_details_carer' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '40',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'job_details_agency_' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '36',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'job_details_agency_view' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '29',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_care_category',
    'entity_type' => 'node',
    'bundle' => 'job',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.job' => 'content_type.job',
  'vocabulary.care_type' => 'vocabulary.care_type',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);

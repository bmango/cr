<?php
/**
 * @file
 * field.profile2.field_title_em.carer.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
      'profile2_private' => 0,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_title_em' => array(
              'value' => 'field_title_em_value',
              'format' => 'field_title_em_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_title_em' => array(
              'value' => 'field_title_em_value',
              'format' => 'field_title_em_format',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'format' => array(
        'table' => 'filter_format',
        'columns' => array(
          'format' => 'format',
        ),
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_title_em',
    'type' => 'text',
    'module' => 'text',
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
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Title',
    'widget' => array(
      'weight' => '1',
      'type' => 'select_or_other',
      'module' => 'select_or_other',
      'active' => 1,
      'settings' => array(
        'available_options' => 'Miss|Miss
Mrs|Mrs
Ms|Ms
Mr|Mr
Dr|Dr',
        'available_options_php' => '',
        'other' => 'Other',
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'other_size' => '60',
        'sort_options' => 0,
        'label_help_description' => '',
        'markup_available_options_php' => '&lt;none&gt;',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '1',
        'settings' => array(
          'empty_fields_handler' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
      'page' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '1',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
      'carer_profile' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '0',
        'settings' => array(),
      ),
      'carer_details_employer_' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '0',
        'settings' => array(),
      ),
      'carer_details_employer' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '32',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_title_em',
    'entity_type' => 'profile2',
    'bundle' => 'carer',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
  2 => 'select_or_other',
);

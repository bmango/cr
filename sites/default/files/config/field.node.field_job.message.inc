<?php
/**
 * @file
 * field.node.field_job.message.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'profile2_private' => FALSE,
      'target_type' => 'node',
      'handler' => 'base',
      'handler_settings' => array(
        'target_bundles' => array(
          'job' => 'job',
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
      ),
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_job' => array(
              'target_id' => 'field_job_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_job' => array(
              'target_id' => 'field_job_target_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'node' => array(
        'table' => 'node',
        'columns' => array(
          'target_id' => 'nid',
        ),
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'field_name' => 'field_job',
    'type' => 'entityreference',
    'module' => 'entityreference',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'target_id' => array(
        'description' => 'The id of the target entity.',
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Job',
    'widget' => array(
      'weight' => '5',
      'type' => 'entityreference_autocomplete',
      'module' => 'entityreference',
      'active' => 1,
      'settings' => array(
        'match_operator' => 'STARTS_WITH',
        'size' => '60',
        'label_help_description' => '',
        'path' => '',
      ),
    ),
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 1,
          'action' => 'hide',
          'action_on_edit' => 1,
          'fallback' => 'hide',
          'skip_perm' => 'access administration menu',
          'providers' => array(
            'url' => 1,
            'og_context' => FALSE,
          ),
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'entityreference_label',
        'settings' => array(
          'link' => FALSE,
          'field_formatter_label' => '',
        ),
        'module' => 'entityreference',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '13',
        'settings' => array(),
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'field_name' => 'field_job',
    'entity_type' => 'node',
    'bundle' => 'message',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.message' => 'content_type.message',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'entityreference',
);

<?php
/**
 * @file
 * field.profile2.field_cr_intro.employer.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'markup' => array(
        'value' => '<p>All the details you give here are optional, but any information you do give will help the carer to understand better the needs of the person being cared for.</p>

<p>When you complete this section, there will still be another section to complete where you give details about the job requirements.</p>
',
        'format' => 'filtered_html',
      ),
      'profile2_private' => 0,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_cr_intro',
    'type' => 'markup',
    'module' => 'markup',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(),
  ),
  'field_instance' => array(
    'label' => 'Care Receiver Intro',
    'widget' => array(
      'weight' => '18',
      'type' => 'markup',
      'module' => 'markup',
      'active' => 0,
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
        'type' => 'markup_default',
        'weight' => '17',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'markup',
      ),
      'employer_details_carer_' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '7',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'field_name' => 'field_cr_intro',
    'entity_type' => 'profile2',
    'bundle' => 'employer',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'profile2_type.employer' => 'profile2_type.employer',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'markup',
);

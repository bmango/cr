<?php
/**
 * @file
 * field.node.field_geofield.job.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'backend' => 'default',
      'profile2_private' => FALSE,
      'srid' => '4326',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_geofield' => array(
              'geom' => 'field_geofield_geom',
              'geo_type' => 'field_geofield_geo_type',
              'lat' => 'field_geofield_lat',
              'lon' => 'field_geofield_lon',
              'left' => 'field_geofield_left',
              'top' => 'field_geofield_top',
              'right' => 'field_geofield_right',
              'bottom' => 'field_geofield_bottom',
              'geohash' => 'field_geofield_geohash',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_geofield' => array(
              'geom' => 'field_geofield_geom',
              'geo_type' => 'field_geofield_geo_type',
              'lat' => 'field_geofield_lat',
              'lon' => 'field_geofield_lon',
              'left' => 'field_geofield_left',
              'top' => 'field_geofield_top',
              'right' => 'field_geofield_right',
              'bottom' => 'field_geofield_bottom',
              'geohash' => 'field_geofield_geohash',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'lat' => array(
        0 => 'lat',
      ),
      'lon' => array(
        0 => 'lon',
      ),
      'top' => array(
        0 => 'top',
      ),
      'bottom' => array(
        0 => 'bottom',
      ),
      'left' => array(
        0 => 'left',
      ),
      'right' => array(
        0 => 'right',
      ),
      'geohash' => array(
        0 => 'geohash',
      ),
      'centroid' => array(
        0 => 'lat',
        1 => 'lon',
      ),
      'bbox' => array(
        0 => 'top',
        1 => 'bottom',
        2 => 'left',
        3 => 'right',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_geofield',
    'type' => 'geofield',
    'module' => 'geofield',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'geom' => array(
        'type' => 'blob',
        'size' => 'big',
        'not null' => FALSE,
      ),
      'geo_type' => array(
        'type' => 'varchar',
        'default' => '',
        'length' => 64,
      ),
      'lat' => array(
        'type' => 'numeric',
        'precision' => 18,
        'scale' => 12,
        'not null' => FALSE,
      ),
      'lon' => array(
        'type' => 'numeric',
        'precision' => 18,
        'scale' => 12,
        'not null' => FALSE,
      ),
      'left' => array(
        'type' => 'numeric',
        'precision' => 18,
        'scale' => 12,
        'not null' => FALSE,
      ),
      'top' => array(
        'type' => 'numeric',
        'precision' => 18,
        'scale' => 12,
        'not null' => FALSE,
      ),
      'right' => array(
        'type' => 'numeric',
        'precision' => 18,
        'scale' => 12,
        'not null' => FALSE,
      ),
      'bottom' => array(
        'type' => 'numeric',
        'precision' => 18,
        'scale' => 12,
        'not null' => FALSE,
      ),
      'geohash' => array(
        'type' => 'varchar',
        'length' => 16,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Geofield',
    'widget' => array(
      'weight' => '21',
      'type' => 'geocoder',
      'module' => 'geocoder',
      'active' => 1,
      'settings' => array(
        'geocoder_field' => 'field_address',
        'geocoder_handler' => 'google',
        'handler_settings' => array(
          'google' => array(
            'geometry_type' => 'point',
            'all_results' => 0,
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
        'delta_handling' => 'default',
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '17',
        'settings' => array(),
      ),
      'job_details_carer' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '12',
        'settings' => array(),
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '0',
        'settings' => array(),
      ),
      'job_details_agency_' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '13',
        'settings' => array(),
      ),
      'job_details_agency_view' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '13',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'ds_extras_field_template' => '',
    'field_name' => 'field_geofield',
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
  1 => 'geofield',
  2 => 'geocoder',
);

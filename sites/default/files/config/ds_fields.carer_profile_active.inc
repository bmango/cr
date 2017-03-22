<?php
/**
 * @file
 * ds_fields.carer_profile_active.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'carer_profile_active';
$ds_field->label = 'Carer Profile Active';
$ds_field->field_type = 5;
$ds_field->entities = array(
  'profile2' => 'profile2',
  'user' => 'user',
);
$ds_field->ui_limit = '';
$ds_field->properties = array(
  'code' => array(
    'value' => '<?php 
  //dpm($entity);
  if($entity->field_profile_active[\'und\'][0][\'value\'] == 1) : ?>
<div class="cr-active">Profile Active</div>
<?php else: ?>
<div class="cr-unactive">Profile Unactive</div>
<?php endif; ?>
',
    'format' => 'ds_code',
  ),
  'use_token' => 1,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);

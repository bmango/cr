<?php
/**
 * @file
 * ds_fields.carer_membership_active.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'carer_membership_active';
$ds_field->label = 'Carer membership active';
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
  global $user;
  //if($entity->field_membership_active[\'und\'][0][\'value\'] == 1) 
  if (in_array(\'carer active\', $user->roles)) : ?>
<div class="cr-active">Membership Active</div>
<?php else: ?>
<div class="cr-unactive"><a href="/subscription">Membership Unactive</a></div>
<?php endif; ?>',
    'format' => 'ds_code',
  ),
  'use_token' => 0,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);

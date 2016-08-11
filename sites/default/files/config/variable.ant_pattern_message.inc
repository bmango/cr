<?php
/**
 * @file
 * variable.ant_pattern_message.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'ant_pattern_message',
  'content' => '<?php 
  global $user;
	$cr_name = cr_profile($user->uid);
  if(isset($node->field_job[\'und\'][0][\'target_id\'])) {
    $job = node_load($node->field_job[\'und\'][0][\'target_id\']);
    $jobtitle = $job->title;
  } else {
    $jobtitle = "";
  }
  if (empty($node->nid)) {
  if (in_array(\'employer active\', $user->roles)) {
			return "Contact Request regarding job: " . $jobtitle;
		} elseif (in_array(\'carer\', $user->roles)) {
			return "Application for: " . $jobtitle;
		} else {
			return "Message";
		}
	} else {
		$node->original = entity_load_unchanged(\'node\', $node->nid);
		return $node->original->title;
	}
?>',
);

$dependencies = array();

$optional = array();

$modules = array();

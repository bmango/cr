<?php
/**
 * @file
 * ctools_custom_content.message_link.inc
 */

$api = '2.0.0';

$data = $content = new stdClass();
$content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
$content->api_version = 1;
$content->name = 'message_link';
$content->admin_title = '';
$content->admin_description = '';
$content->category = '';
$content->settings = array(
  'admin_title' => 'User Message Link',
  'title' => '',
  'body' => '<p><a href="/messages/new/%profile2:user:uid">Send a message to %profile2:user</a></p>
',
  'format' => 'full_html',
  'substitute' => 1,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ctools_custom_content',
);

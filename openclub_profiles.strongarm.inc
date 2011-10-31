<?php
/**
 * @file
 * openclub_profiles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function openclub_profiles_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';
  $export['user_pictures'] = $strongarm;

  return $export;
}

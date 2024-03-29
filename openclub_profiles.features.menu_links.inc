<?php
/**
 * @file
 * openclub_profiles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openclub_profiles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:members
  $menu_links['main-menu:members'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'members',
    'router_path' => 'members',
    'link_title' => 'Members',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Members');


  return $menu_links;
}

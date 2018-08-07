<?php
/**
 * @file
 * ipr_companie.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ipr_companie_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ipr_companie_node_info() {
  $items = array(
    'ipr_companie' => array(
      'name' => t('IPR Companie'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

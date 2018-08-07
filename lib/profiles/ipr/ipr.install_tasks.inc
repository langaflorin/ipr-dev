<?php

/**
 * @file
 * Installation tasks for IPR profile.
 */

/**
 * Task callback: to cleanup after installation.
 */
function ipr_install_cleanup() {
  $operations = array();

  // Flush caches.
  $operations[] = array('_ipr_install_flush_caches', array(t('Flushed caches.')));

  // Revert all features.
  //$operations[] = array('_ipr_install_revert_all_features', array(t('Revert all features.')));

  // Flush caches again.
  $operations[] = array('_ipr_install_flush_caches', array(t('Flushed caches.')));

  $batch = array(
    'title' => t('Performing installation cleanup'),
    'operations' => $operations,
    'finished' => 'ipr_install_cleanup_finished',
    'file' => drupal_get_path('profile', 'ipr') . '/ipr.install_callbacks.inc',
  );

  return $batch;
}

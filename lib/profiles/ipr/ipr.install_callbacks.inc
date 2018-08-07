<?php

/**
 * @file
 * Contains callbacks used during installation.
 */

/**
 * BatchAPI callback.
 *
 * Flushes all caches.
 *
 * @see ipr_install_cleanup()
 */
function _ipr_install_flush_caches($operation, &$context) {
  $context['message'] = t('@operation', array('@operation' => $operation));
  drupal_flush_all_caches();
}

/**
 * Batch API callback.
 *
 * Reverts all installed Recruiter features.
 *
 * @see ipr_install_cleanup()
 */
function _ipr_install_revert_all_features($operation, &$context) {
  $context['message'] = t('@operation', array('@operation' => $operation));
  features_revert();
}

/**
 * Batch API finished callback.
 *
 * @see ipr_install_cleanup()
 */
function ipr_install_cleanup_finished($success, $results) {
  // Remove any generated messages.
  drupal_get_messages(NULL, TRUE);

  if ($success) {
    drupal_set_message(t('Finished installation cleanup.'), 'status', FALSE);
  }
  else {
    drupal_set_message(t('Error performing installation cleanup.'), 'error', FALSE);
  }
}

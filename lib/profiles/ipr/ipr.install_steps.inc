<?php

/**
 * @file
 * Installation steps for IPR profile.
 */

/**
 * Setup ipr and admin theme.
 */
function ipr_install_setup_theme() {
  $admin_theme = 'adminimal';

  // Enable bootstrap base theme.
  theme_enable(array('bootstrap'));

  // Set ips as a default theme.
  variable_set('theme_default', 'bootstrap');

  // Enable admin theme.
  theme_enable(array($admin_theme));

  // Set adminimal as an admin theme.
  variable_set('admin_theme', $admin_theme);
  variable_set('node_admin_theme', '1');

  // Disable batrik theme.
  theme_disable(array('bartik'));
}

/**
 * Setup roles and permissions.
 *
 * We use Role Export's machine names here to make sure we have consistent role
 * ids.
 */
function ipr_install_setup_roles() {
  // Load the admin role.

}

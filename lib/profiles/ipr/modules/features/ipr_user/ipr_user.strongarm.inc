<?php
/**
 * @file
 * ipr_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ipr_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_fb_connect_api_version';
  $strongarm->value = 'v2.8';
  $export['simple_fb_connect_api_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_fb_connect_appid';
  $strongarm->value = '500969070348459';
  $export['simple_fb_connect_appid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_fb_connect_app_domains';
  $strongarm->value = 'localhost';
  $export['simple_fb_connect_app_domains'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_fb_connect_disabled_roles';
  $strongarm->value = array();
  $export['simple_fb_connect_disabled_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_fb_connect_disable_admin_login';
  $strongarm->value = 1;
  $export['simple_fb_connect_disable_admin_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_fb_connect_login_only';
  $strongarm->value = 0;
  $export['simple_fb_connect_login_only'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_fb_connect_logout_action';
  $strongarm->value = '0';
  $export['simple_fb_connect_logout_action'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_fb_connect_oauth_redirect_url';
  $strongarm->value = 'https://localhost/ipr-dev/web/user/simple-fb-connect/return';
  $export['simple_fb_connect_oauth_redirect_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_fb_connect_post_login_url';
  $strongarm->value = 'user';
  $export['simple_fb_connect_post_login_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_fb_connect_redirect_user_form';
  $strongarm->value = 0;
  $export['simple_fb_connect_redirect_user_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_fb_connect_site_url';
  $strongarm->value = 'https://localhost/ipr-dev/web';
  $export['simple_fb_connect_site_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_fb_connect_skey';
  $strongarm->value = '0c2b7582d670899a93597d2bc7dbc216';
  $export['simple_fb_connect_skey'] = $strongarm;

  return $export;
}

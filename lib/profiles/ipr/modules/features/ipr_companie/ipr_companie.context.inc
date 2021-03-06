<?php

/**
 * @file
 * ipr_companie.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ipr_companie_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = '';
  $context->tag = 'frontpage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cautare_companie-block' => array(
          'module' => 'views',
          'delta' => 'cautare_companie-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('frontpage');
  $export['search'] = $context;

  return $export;
}

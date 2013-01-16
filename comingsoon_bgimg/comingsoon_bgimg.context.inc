<?php
/**
 * @file
 * comingsoon_bgimg.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function comingsoon_bgimg_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'aura_bg_imag';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~admin' => '~admin',
        '~admin/*' => '~admin/*',
      ),
    ),
  );
  $context->reactions = array(
    'dynamic_background' => array(
      0 => array(
        'selected' => 1,
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['aura_bg_imag'] = $context;

  return $export;
}

<?php
/**
 * @file
 * comingsoon_gplusone_btn.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function comingsoon_gplusone_btn_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_plusone_button_settings';
  $strongarm->value = array(
    'count' => '1',
    'size' => '',
    'css' => 'margin: 0 1em 1em 1em; float:right',
    'syntax' => 'HTML5',
  );
  $export['google_plusone_button_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_plusone_node_location';
  $strongarm->value = array(
    'full' => 'full',
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'links' => 0,
  );
  $export['google_plusone_node_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_plusone_node_types';
  $strongarm->value = array(
    'page' => 'page',
    'article' => 0,
  );
  $export['google_plusone_node_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_plusone_weight';
  $strongarm->value = '44';
  $export['google_plusone_weight'] = $strongarm;

  return $export;
}

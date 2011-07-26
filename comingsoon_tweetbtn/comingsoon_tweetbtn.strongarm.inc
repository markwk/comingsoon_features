<?php
/**
 * @file
 * comingsoon_tweetbtn.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function comingsoon_tweetbtn_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tweetbutton_button';
  $strongarm->value = 'none';
  $export['tweetbutton_button'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tweetbutton_node_location';
  $strongarm->value = array(
    'full' => 'full',
    'teaser' => 0,
  );
  $export['tweetbutton_node_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tweetbutton_node_types';
  $strongarm->value = array(
    'page' => 'page',
    'article' => 0,
  );
  $export['tweetbutton_node_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tweetbutton_node_weight';
  $strongarm->value = '10';
  $export['tweetbutton_node_weight'] = $strongarm;

  return $export;
}

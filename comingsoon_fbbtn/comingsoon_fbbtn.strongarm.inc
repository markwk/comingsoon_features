<?php
/**
 * @file
 * comingsoon_fbbtn.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function comingsoon_fbbtn_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_bl_iframe_css';
  $strongarm->value = 'float:left';
  $export['fblikebutton_bl_iframe_css'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_bl_iframe_height';
  $strongarm->value = '80';
  $export['fblikebutton_bl_iframe_height'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_bl_iframe_width';
  $strongarm->value = '200';
  $export['fblikebutton_bl_iframe_width'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_bl_layout';
  $strongarm->value = 'button_count';
  $export['fblikebutton_bl_layout'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_iframe_css';
  $strongarm->value = 'float:right; padding: 4px;';
  $export['fblikebutton_iframe_css'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_iframe_height';
  $strongarm->value = '80';
  $export['fblikebutton_iframe_height'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_layout';
  $strongarm->value = 'button_count';
  $export['fblikebutton_layout'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_node_types';
  $strongarm->value = array(
    'page' => 'page',
    'article' => 0,
  );
  $export['fblikebutton_node_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_show_faces';
  $strongarm->value = 'show';
  $export['fblikebutton_show_faces'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_weight';
  $strongarm->value = '47';
  $export['fblikebutton_weight'] = $strongarm;

  return $export;
}

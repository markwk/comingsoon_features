<?php
/**
 * @file
 * comingsoon_bgimg.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function comingsoon_bgimg_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_context_css';
  $strongarm->value = array(
    'selector' => 'body',
    'css' => '',
  );
  $export['dynamic_background_context_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_context_image_style';
  $strongarm->value = array(
    'style' => '0',
  );
  $export['dynamic_background_context_image_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_css';
  $strongarm->value = array(
    'selector' => 'body',
    'css' => '',
  );
  $export['dynamic_background_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_images';
  $strongarm->value = array(
    0 => array(
      'picture' => 'public://bg_img/lightblue_wallpaper.jpg',
      'fid' => '1',
      'picture_use' => 0,
      'picture_delete' => 0,
    ),
  );
  $export['dynamic_background_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_image_style';
  $strongarm->value = array(
    'style' => '0',
  );
  $export['dynamic_background_image_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_setting';
  $strongarm->value = array(
    'num_of_pictures' => '1',
    'path' => 'bg_img',
    'extensions' => 'jpg jpeg png',
  );
  $export['dynamic_background_setting'] = $strongarm;

  return $export;
}

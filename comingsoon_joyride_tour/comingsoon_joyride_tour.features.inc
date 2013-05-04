<?php
/**
 * @file
 * comingsoon_joyride_tour.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function comingsoon_joyride_tour_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

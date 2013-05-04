<?php
/**
 * @file
 * comingsoon_joyride_tour.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function comingsoon_joyride_tour_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'comingsoon_joyride_tour';
  $context->description = '';
  $context->tag = 'comingsoon';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'welcome' => 'welcome',
      ),
    ),
  );
  $context->reactions = array(
    'joyride_add' => array(
      'joyride_auto_start' => 1,
      'joyride_play_once' => 0,
      'joyride_tour_content' => '<li data-button="Next">
  <h2>Welcome to the ComingSoon Distribution for Drupal</h2>
  <p>This distribution is intended to creating Pre-Launch sites for your projects. This site tour will walk though the basic features.</p>
</li>
<li data-id="signup-share-track-join-block-form" data-options="tipLocation:bottom;" data-button="Next">
  <h2>Sign Up Form</h2>
  <p>Most of the main functionality is via the Sign Up form itself, where users can enter their email address to automatically subscribe to your service. This functionality is handled by the <a href="/admin/config/people/sst">Sign Up Share Track module</a></p>
</li>
<li data-id="block-signup-share-track-sst-signup-form" data-options="tipLocation:right;" data-button="Next">
  <h2>Configuring Sign Up Form</h2>
  <p>The Sign Up form text and functionality can be configured by hovering over and selecting "Sign Up Share Track Settings" or by going directly to the configuration page at <a href="/admin/config/people/sst">admin/config/people/sst</a></p>
</li>
<li data-class="logo-img" data-options="tipLocation:bottom;" data-button="Next">
  <h2>Custom Logo</h2>
  <p>The default theme <a href="/admin/appearance/settings/aura">"Aura"</a> is a mobile-friendly, Omega subtheme and various settings can be configured including <a href="/admin/appearance/settings/aura">changing the default logo under "Logo Image Settings"</a></p>
</li>
<li data-id="zone-content" data-button="Next">
  <h2>Custom Background Image</h2>
  <p>The<a href="/admin/config/user-interface/backgrounds"> background image</a> can also be customized with your own illustration or photography using the settings in the <a href="/admin/config/user-interface/backgrounds">Dynamic background module</a>.
</li>
<li data-button="Next">
  <h2>ComingSoon Feature Summary</h2>
  <p>This distribution is powered by these modules: <a href="/admin/config/people/sst">Sign Up Share Track</a> and <a href="/admin/config/user-interface/backgrounds">Dynamic background module</a> along with additional tweaks in the theme and other settings.</p>
</li>
<li data-button="close">
  <h2>ComingSoon Feature Summary #2</h2>
  <p>We hope this distribution will help you launch your next project quickly. For more info, checkout the <a href="http://drupal.org/project/comingsoon">Drupal.org Project page</a> or read this <a href="http://int3c.com/blog/2013/01/create-pre-launch-site-comingsoon-drupal-distribution">article summarizing the overall usage.</a></p>
</li>',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('comingsoon');
  $export['comingsoon_joyride_tour'] = $context;

  return $export;
}

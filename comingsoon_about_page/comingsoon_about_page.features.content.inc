<?php
/**
 * @file
 * comingsoon_about_page.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function comingsoon_about_page_content_defaults() {
  $content = array();

  $content['comingsoon_about_page'] = (object) array(
    'title' => 'About us',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1358263818',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'comingsoon_about_page',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam scelerisque hendrerit felis vel accumsan. Nam malesuada pellentesque augue, ac feugiat elit dictum non. Aliquam vel neque vitae purus gravida aliquet. Aenean id dui id risus faucibus ultricies sed eget tellus. Suspendisse potenti. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Maecenas pretium ipsum at massa elementum sagittis. Maecenas lacinia nibh ac sem ultricies pulvinar. Sed ipsum lectus, auctor et condimentum gravida, suscipit sed mi.

Suspendisse potenti. Donec vitae ante arcu, ac feugiat massa. Aliquam id quam nulla. Pellentesque at velit sed sem dignissim ultricies. Proin commodo consequat vestibulum. Aliquam adipiscing rhoncus lectus congue convallis. Morbi porta, elit vitae eleifend condimentum, arcu metus rutrum augue, nec imperdiet purus augue eu orci.

Mauris purus odio, sagittis non bibendum sed, vestibulum non tellus. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Ut dictum, mi a interdum porta, enim nibh blandit turpis, ac suscipit velit leo aliquam arcu. Donec luctus condimentum lorem in rutrum. Vestibulum vel sem ipsum. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.

Curabitur mattis dapibus sagittis. Curabitur adipiscing, arcu quis dignissim vulputate, neque risus placerat sem, ac hendrerit nulla arcu vitae lectus. Aliquam ultricies nibh sit amet ante tincidunt interdum consequat orci facilisis. Duis vel justo sed mauris posuere porta. Suspendisse enim nulla, pulvinar eu dapibus vitae, viverra at urna. Donec posuere ornare dignissim. Proin molestie, leo sit amet lobortis interdum, odio turpis porta libero, ultricies luctus magna sapien ornare massa.

Nulla dictum varius dignissim. Nam tincidunt condimentum velit elementum fringilla. Curabitur leo arcu, faucibus accumsan vulputate eget, pulvinar sit amet leo. Quisque sollicitudin eleifend faucibus. Sed rutrum volutpat lacus, eget dignissim augue tempor vitae. Praesent mauris nisi, feugiat ac adipiscing eget, malesuada eu magna. Nunc nec odio nec lacus porttitor accumsan. Nulla facilisi. Nunc accumsan malesuada lacus nec porttitor. Maecenas varius ultricies diam, et facilisis neque porta sit amet.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam scelerisque hendrerit felis vel accumsan. Nam malesuada pellentesque augue, ac feugiat elit dictum non. Aliquam vel neque vitae purus gravida aliquet. Aenean id dui id risus faucibus ultricies sed eget tellus. Suspendisse potenti. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Maecenas pretium ipsum at massa elementum sagittis. Maecenas lacinia nibh ac sem ultricies pulvinar. Sed ipsum lectus, auctor et condimentum gravida, suscipit sed mi.</p>
<p>Suspendisse potenti. Donec vitae ante arcu, ac feugiat massa. Aliquam id quam nulla. Pellentesque at velit sed sem dignissim ultricies. Proin commodo consequat vestibulum. Aliquam adipiscing rhoncus lectus congue convallis. Morbi porta, elit vitae eleifend condimentum, arcu metus rutrum augue, nec imperdiet purus augue eu orci.</p>
<p>Mauris purus odio, sagittis non bibendum sed, vestibulum non tellus. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Ut dictum, mi a interdum porta, enim nibh blandit turpis, ac suscipit velit leo aliquam arcu. Donec luctus condimentum lorem in rutrum. Vestibulum vel sem ipsum. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.</p>
<p>Curabitur mattis dapibus sagittis. Curabitur adipiscing, arcu quis dignissim vulputate, neque risus placerat sem, ac hendrerit nulla arcu vitae lectus. Aliquam ultricies nibh sit amet ante tincidunt interdum consequat orci facilisis. Duis vel justo sed mauris posuere porta. Suspendisse enim nulla, pulvinar eu dapibus vitae, viverra at urna. Donec posuere ornare dignissim. Proin molestie, leo sit amet lobortis interdum, odio turpis porta libero, ultricies luctus magna sapien ornare massa.</p>
<p>Nulla dictum varius dignissim. Nam tincidunt condimentum velit elementum fringilla. Curabitur leo arcu, faucibus accumsan vulputate eget, pulvinar sit amet leo. Quisque sollicitudin eleifend faucibus. Sed rutrum volutpat lacus, eget dignissim augue tempor vitae. Praesent mauris nisi, feugiat ac adipiscing eget, malesuada eu magna. Nunc nec odio nec lacus porttitor accumsan. Nulla facilisi. Nunc accumsan malesuada lacus nec porttitor. Maecenas varius ultricies diam, et facilisis neque porta sit amet.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}

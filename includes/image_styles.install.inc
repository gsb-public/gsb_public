<?php

function _gsb_public_setup_image_styles() {
  // Declare our image styles
  $image_styles = array(
    '170x170' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '170',
          'height' => '170',
        ),
      ),
    ),
    '270x158' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '270',
          'height' => '158',
        ),
      ),
    ),
    '270x158_video' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '270',
          'height' => '158',
        ),
        'weight' => 1,
      ),
      array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'center',
          'ypos' => 'center',
          'alpha' => 100,
          'path' => 'profiles/gsb_public/themes/gsb_theme/images/video_play.png',
        ),
        'weight' => 2,
      ),
    ),
    '627x367' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '627',
          'height' => '367',
        ),
      ),
    ),
    '170x100' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '170',
          'height' => '100',
        ),
      ),
    ),
    '44x44' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '44',
          'height' => '44',
        ),
      ),
    ),
    '566x396' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 566,
          'height' => 396,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Loop through the image styles and add them.
  foreach ($image_styles as $name => $effects) {
    $style = image_style_save(array('name' => $name));
    foreach ($effects as $effect) {
      $effect['isid'] = $style['isid'];
      image_effect_save($effect);
    }
  }
}

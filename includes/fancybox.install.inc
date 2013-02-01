<?php

function _gsb_public_setup_fancybox() {
  $settings = variable_get('fancybox_settings', array());

  // Set the selector
  $settings['settings']['selectors'] = '.fancybox';
  variable_set('fancybox_settings', $settings);
}

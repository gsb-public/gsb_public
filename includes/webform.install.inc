<?php

function _gsb_public_setup_webform() {
  // Remove unused body field that was created automatically on webform install.
  $instance = field_info_instance('node', 'body', 'webform');
  if (!empty($instance)) {
    field_delete_instance($instance);
  }
}

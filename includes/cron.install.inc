<?php

function _gsb_public_setup_cron() {
  $variables = array(
    'cron_safe_threshold' => 0,
  );

  _gsb_public_variable_set_multiple($variables);
}

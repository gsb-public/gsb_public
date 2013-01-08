<?php

function gsb_public_modules_enabled($modules) {
  if (in_array('gsb_feature_page', $modules)) {
    watchdog("test", "gsb_feature_page is enabled");
  }
}

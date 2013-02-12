<?php

/**
 * Revert features after install
 */
function _gsb_public_setup_revert() {
  // Add revert for one feature
  features_revert(array('gsb_feature_club' => array('field', 'views_view', 'ctools')));
}

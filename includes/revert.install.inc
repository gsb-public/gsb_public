<?php

/**
 * Revert features after install
 */
function _gsb_public_setup_revert() {
  // I have to make single page revert witch is delete basically. It will restore panel page from sources so we have variant enbaled by default. I took time to figure out how it is possible
  page_manager_page_delete(page_manager_page_load('club_search_page'));
}

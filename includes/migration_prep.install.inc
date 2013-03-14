<?php

function _gsb_public_setup_migration_prep() {
  // Begin node id at 300,000 so we can leave room for old nid's coming from the
  // old site.
  db_query("ALTER TABLE {node} AUTO_INCREMENT=300000");

  // Begin taxonomy vocabulary id at 100
  db_query("ALTER TABLE {taxonomy_vocabulary} AUTO_INCREMENT=100");

  // Begin taxonomy term id at 10,000
  db_query("ALTER TABLE {taxonomy_term_data} AUTO_INCREMENT=10000");
}


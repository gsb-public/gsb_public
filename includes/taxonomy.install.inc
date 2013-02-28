<?php

function _gsb_public_setup_taxonomy() {
  $vocabularies = array(
    'academic_area' => array(
      'name' => 'Academic Area',
      'description' => t(''),
    ),
    'business_insight_topic' => array(
      'name' => 'Business Insight Topic',
      'description' => t(''),
    ),
    'club_category' => array(
      'name' => 'Club Category',
      'description' => t(''),
    ),
    'company_organization' => array(
      'name' => 'Company/Organization',
      'description' => t(''),
    ),
    'discipline' => array(
      'name' => 'Discipline',
      'description' => t(''),
    ),
    'event_category' => array(
      'name' => 'Event Category',
      'description' => t(''),
    ),
    'event_series' => array(
      'name' => 'Event Series',
      'description' => t(''),
    ),
    'industry' => array(
      'name' => 'Industry',
      'description' => t(''),
    ),
    'program' => array(
      'name' => 'Program',
      'description' => t(''),
    ),
    'region' => array(
      'name' => 'Region',
      'description' => t(''),
    ),
    'tag' => array(
      'name' => 'Tag',
      'description' => t(''),
    ),
    'target_audience' => array(
      'name' => 'Target Audience',
      'description' => t(''),
    ),
  );

  foreach ($vocabularies as $machine_name => $info) {
    $vocabulary = (object) array(
      'machine_name' => $machine_name,
      'name' => $info['name'],
      'description' => $info['description'],
    );

    taxonomy_vocabulary_save($vocabulary);
  }
}

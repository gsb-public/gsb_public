<?php

function _gsb_public_setup_taxonomy() {
  $vocabulary = (object) array(
    'name' => 'Function',
    'machine_name' => 'function',
    'description' => t(''),
  );

  taxonomy_vocabulary_save($vocabulary);

  $vocabulary = (object) array(
    'name' => 'Industry',
    'machine_name' => 'industry',
    'description' => t(''),
  );

  taxonomy_vocabulary_save($vocabulary);

  $vocabulary = (object) array(
    'name' => 'Region',
    'machine_name' => 'region',
    'description' => t(''),
  );

  taxonomy_vocabulary_save($vocabulary);

  $vocabulary = (object) array(
    'name' => 'Business Insight Topic',
    'machine_name' => 'business_insight_topic',
    'description' => t(''),
  );

  taxonomy_vocabulary_save($vocabulary);

  $vocabulary = (object) array(
    'name' => 'Event Category',
    'machine_name' => 'event_category',
    'description' => t(''),
  );

  taxonomy_vocabulary_save($vocabulary);

  $vocabulary = (object) array(
    'name' => 'Target Audience',
    'machine_name' => 'target_audience',
    'description' => t(''),
  );

  taxonomy_vocabulary_save($vocabulary);

  $vocabulary = (object) array(
    'name' => 'Company/Organization',
    'machine_name' => 'company_organization',
    'description' => t(''),
  );

  taxonomy_vocabulary_save($vocabulary);

  $vocabulary = (object) array(
    'name' => 'Course Category',
    'machine_name' => 'course_category',
    'description' => t(''),
  );

  taxonomy_vocabulary_save($vocabulary);

  $vocabulary = (object) array(
    'name' => 'Academic Area',
    'machine_name' => 'academic_areas',
    'description' => t(''),
  );

  taxonomy_vocabulary_save($vocabulary);

  $vocabulary = (object) array(
    'name' => 'Event Series',
    'machine_name' => 'event_series',
    'description' => t(''),
  );

  taxonomy_vocabulary_save($vocabulary);

  $vocabulary = (object) array(
    'name' => 'Program',
    'machine_name' => 'program',
    'description' => t(''),
  );

  taxonomy_vocabulary_save($vocabulary);
}

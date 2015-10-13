<?php
/**
 * @file
 * student_type.features.inc
 */

/**
 * Implements hook_views_api().
 */
function student_type_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_student_type().
 */
function student_type_default_student_type() {
  $items = array();
  $items['student'] = entity_import('student_type', '{
    "type" : "student",
    "label" : "Student",
    "weight" : 0,
    "description" : "Student entity",
    "rdf_mapping" : []
  }');
  return $items;
}

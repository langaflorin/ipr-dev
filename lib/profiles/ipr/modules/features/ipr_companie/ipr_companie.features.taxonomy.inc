<?php

/**
 * @file
 * ipr_companie.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ipr_companie_taxonomy_default_vocabularies() {
  return array(
    'ipr_domeniu_de_activitate' => array(
      'name' => 'Domeniu de activitate',
      'machine_name' => 'ipr_domeniu_de_activitate',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

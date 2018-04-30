<?php

/**
 * Defines custom Facetapi url processor.
 *
 * It need to not includes breadcrumbs on search page.
 */

class FacetApiOdsherredSearch extends FacetapiUrlProcessorStandard {
  public function setBreadcrumb() {
    // Keep default behavior.
  }
}
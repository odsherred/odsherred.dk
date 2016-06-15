jQuery('#edit-search-block-form--2').live('keyup', function() {
  "use strict";
  window.location.href = "/search/node/" + this.value;
});

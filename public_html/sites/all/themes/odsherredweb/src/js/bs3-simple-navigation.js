// |--------------------------------------------------------------------------
// | BS3 simple navigation
// |--------------------------------------------------------------------------
// |
// | This jQuery script is written by
// | Morten Nissen
// |
var bs3SimpleNavigation = (function ($) {
    'use strict';

    var pub = {};

    /**
     * Instantiate
     */
    pub.init = function (options) {
        registerEventHandlers();
        registerBootEventHandlers();
    }

    /**
     * Register event handlers
     */
    function registerEventHandlers() {

        // Toggle search form
        $('[data-search-form-toggle]').on('click touchstart', function (event) {
            event.preventDefault();

            var $element = $(this);
            toggleSearchForm($element);
        });
    }

    /**
     * Register boot event handlers
     */
    function registerBootEventHandlers() {
    }

    /**
     * Toggle search form
     */
    function toggleSearchForm($element) {
        var $parent = $element.parent('.simple-navigation-button');
        var $form = $parent.find('.simple-navigation-search-form');
        var $input = $form.find('input[type="text"]');

        $form.toggleClass('visible');

        if ($form.hasClass('visible')) {
            $input.focus();
        }
    }

    return pub;
})(jQuery);

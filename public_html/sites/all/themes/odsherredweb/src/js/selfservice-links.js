// |--------------------------------------------------------------------------
// | OS2 Self Service Toggle
// |--------------------------------------------------------------------------
// |
// | This jQuery script is written by
// | Morten Nissen
// |

var selfServiceLinks = (function ($) {
    'use strict';
    var pub = {};

    /**
     * Instantiate
     */
    pub.init = function (options) {
        registerEventHandlers();
        registerBootHandlers();
    };

    /**
     * Register event handlers
     */
    function registerEventHandlers() {

        // Main
        $('.selvbetjening .item-list h3').on('click', function (event) {
            event.preventDefault();

            var $element = $(this);

            // Toggle active class
            $element
                .parents('.item-list')
                .toggleClass('open');
        });

        $('.selvbetjening-alfabetisk .view-header h3').on('click', function (event) {
            event.preventDefault();

            var $element = $(this);

            // Toggle active class
            $element
                .parents('.selvbetjening-alfabetisk')
                .toggleClass('open');
        });
    }

    /**
     * Register boot handlers
     */
    function registerBootHandlers() {
    }

    return pub;
})(jQuery);

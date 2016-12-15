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

        $('.view-selvbetjeninger-alfa h3').on('click', function (event) {
            event.preventDefault();
            console.log('Clicked h3');

            var $element = $(this);

            // Toggle active class
            $element
                .parent()
                .parent()
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

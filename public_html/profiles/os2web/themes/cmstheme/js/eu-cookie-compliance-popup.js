(function ($) {
  'use strict';
    $(document).ready(function () {
      if ($('#popupOverlay').length < 1) {
        return;
      }

      $('#sliding-popup').addClass('sliding-popup-popup');

      $(document).on('click', '.agree-button, .eu-cookie-compliance-save-preferences-button, .decline-button', function() {
        $('#sliding-popup').addClass('popup-hidden');
      });
      $(document).on('click', '.eu-cookie-withdraw-tab', function() {
        $('#sliding-popup').removeClass('popup-hidden');
      });
      $(document).on('click', '.popup-toggle-group button', function() {
        $('#popupConsentBannerCategoriesWrapper').slideToggle('hidden');
        $('.popup-toggle-group button').toggleClass('hidden');
      });
  });
})(jQuery);

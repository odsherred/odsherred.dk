(function ($) {
  'use strict';
  Drupal.behaviors.eu_cookie_compliance_popup_popup = {
    attach: function (context, settings) {
      if (Drupal.settings.eu_cookie_compliance.popup_position != 'popup') {
        return;
      }
      $(document).ready(function () {
        $('#sliding-popup').addClass('sliding-popup-popup');
        var $popupWrapper = $('#popup-banner-wrapper');
        if (!Drupal.settings.eu_cookie_compliance.popup_use_bare_css) {
          $popupWrapper.height(Drupal.settings.eu_cookie_compliance.popup_height)
            .width(Drupal.settings.eu_cookie_compliance.popup_width);
        }
      });

      $(document).on('click', '.agree-button, .eu-cookie-compliance-save-preferences-button, .decline-button', function () {
        $('body').removeClass('eu-cookie-compliance-popup-open');
        $('body').addClass('eu-cookie-compliance-popup-closed');
      });
      $(document).on('click', '.eu-cookie-withdraw-tab', function () {
        $('body').addClass('eu-cookie-compliance-popup-open');
        $('body').removeClass('eu-cookie-compliance-popup-closed');
      });
      $(document).on('click', '.popup-toggle-group button', function () {
        $('#popupConsentBannerCategoriesWrapper').slideToggle('hidden');
        $('.popup-toggle-group button').toggleClass('hidden');
      });

      $('body').addClass('eu-cookie-compliance-popup-closed');
      $(document).on('eu_cookie_compliance_popup_open', 'body', function () {
        $('body').removeClass('eu-cookie-compliance-popup-closed');
      });
    }
  }
})(jQuery);

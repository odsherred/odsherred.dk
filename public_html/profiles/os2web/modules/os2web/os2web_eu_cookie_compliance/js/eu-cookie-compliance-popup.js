(function ($) {
  'use strict';
  Drupal.behaviors.os2web_eu_cookie_compliance_popup = {
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
        closePopup();
      });

      $(document).on('click', '.agree-button, .eu-cookie-compliance-save-preferences-button, .decline-button', closePopup);
      $(document).on('click', '.eu-cookie-withdraw-tab', openPopup);
      $(document).on('click', '.popup-toggle-group button', function () {
        $('#popupConsentBannerCategoriesWrapper').slideToggle('hidden');
        $('.popup-toggle-group button').toggleClass('hidden');
      });
      $(document).on('click', '.popup-consent-banner__category-name', function () {
        var $id = '#' + $(this).attr('for');
        $($id).toggle();
      });

      $(document).on('eu_cookie_compliance_popup_open', 'body', function () {
        $('body').removeClass('eu-cookie-compliance-popup-closed');
      });

      if (Drupal.settings.eu_cookie_compliance.method === 'categories') {
        attachOnlyRequiredEvents();
      }
    }
  }

  var acceptRequiredAction = function () {
    var requiredCategories = new Array();

    for (var cat in Drupal.settings.eu_cookie_compliance.cookie_categories_details) {
      if (Drupal.settings.eu_cookie_compliance.cookie_categories_details[cat].checkbox_default_state == 'required') {
        requiredCategories.push(cat);
      }
    }
    console.log(requiredCategories);
    var nextStatus = 1;
    Drupal.eu_cookie_compliance.setAcceptedCategories(requiredCategories);
    // Load scripts for all categories. If no categories selected, none
    // will be loaded.
    Drupal.eu_cookie_compliance.loadCategoryScripts(requiredCategories);
    if (!requiredCategories.length) {
      // No categories selected is the same as declining all cookies.
      nextStatus = 0;
    }
    Drupal.eu_cookie_compliance.changeStatus(nextStatus);
    closePopup();
  }

  var attachOnlyRequiredEvents = function () {
    $(document).on('click', '.eu-cookie-compliance-only-required-button', acceptRequiredAction);
  };

  var closePopup = function () {
    $('body').removeClass('eu-cookie-compliance-popup-open')
      .addClass('eu-cookie-compliance-popup-closed');
  };

  var openPopup = function () {
    $('body').addClass('eu-cookie-compliance-popup-open')
      .removeClass('eu-cookie-compliance-popup-closed');
  };

})(jQuery);

Drupal.behaviors.os2web_menus = {
  attach: function (context, settings) {
    jQuery('.js-megamenu-toggle').click(function(){
      jQuery('.megamenu-panel').hide();

      var $parent = jQuery(this).parent();
      if($parent.hasClass('open')){
        $parent.find('.megamenu-panel').hide();
        $parent.removeClass('open');
      }
      else {
        $parent.find('.megamenu-panel').show();
        jQuery('.megamenu').not($parent).removeClass('open');
        $parent.addClass('open');
      }

      return false;
    });

    jQuery('.megamenu').each(function(){
      var offset = -(jQuery(this).position().left);
      jQuery(this).find('.megamenu-panel').css({left: offset});
    });
  }
};

Drupal.behaviors.os2web_menus = {
  attach: function (context, settings) {
    jQuery('.js-megamenu-toggle').click(function(){
      jQuery('.megamenu-panel').hide();

      var $parent = jQuery(this).parent();
      if($parent.hasClass('open')){
        $parent.find('.megamenu-panel').hide();
        $parent.removeClass('open');
        jQuery(this).removeClass('open');
      }
      else {
        $parent.find('.megamenu-panel').show();
        jQuery('.megamenu').not($parent).removeClass('open');
        $parent.addClass('open');
        jQuery(this).addClass('open');
        jQuery('.megamenu').not($parent).find('.js-megamenu-toggle').removeClass('open');
        $parent.find('.megamenu-panel').mouseleave(function(event) {
          $parent.find('.megamenu-panel').hide();
          $parent.find('.js-megamenu-toggle').removeClass('open');
          $parent.removeClass('open');
        });
      }

      return false;
    });

    jQuery('.megamenu').each(function(){
      var offset = -(jQuery(this).position().left);

      if (offset != 0) {
        offset -= 10;
      }
      //jQuery(this).find('.megamenu-panel').css({left: offset});
    });
  }
};
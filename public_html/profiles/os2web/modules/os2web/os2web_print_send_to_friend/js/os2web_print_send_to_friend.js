jQuery(document).ready(function($) {
  $(".throbber").hide();
  $("#send_to_friend_form").submit(function(e){
    
    var $form = $(this);
    serializedData = $form.serialize();

    var email = $("#field_send_to_friend_email").val();
    var id = $("#field_bullet_point_id").val();

    if (!checkEmail(email)){
      $("#field_send_to_friend_email").focus();
      $("#field_send_to_friend_email").addClass("error");
    }
    else 
    {
      $(".throbber").show();
      $("#field_send_to_friend_email").removeClass("error");

      $.post("/dagsorden_punkt/"+ id +"/send_to_friend_service", serializedData, function(response){
      });
      parent.Lightbox.end()

    }

  e.preventDefault;
  });

  function checkEmail(email) {
    var regex = /^([a-zA-Z0-9_\.\-\+])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/;
    return regex.test(email);
  }

});

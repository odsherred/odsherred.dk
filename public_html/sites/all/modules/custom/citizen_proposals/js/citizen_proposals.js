jQuery(function ($) {
  var citizen_proposals = {
    slide_speed: 200,
  }
  citizen_proposals.init = function () {
    // Check if hash is set, and scroll to it.
    if (window.location.hash.length > 1) {
      var hash_nid = window.location.hash.split('#')[1]
      var proposal_wrapper = $('#citizen_proposals .proposal_wrapper[data-nid="' + hash_nid + '"]')
      if (proposal_wrapper.length == 0) {
        return;
      }
      proposal_wrapper.find('a.proposal').click()
      $('html, body').animate({
        scrollTop: proposal_wrapper.offset().top - 140
      }, 500);
    }
  }


  $(document).on('click', '#create_proposal_link', function (e) {
    // Open/hide the create_proposal form.
    $('#create_proposal').slideToggle(citizen_proposals.slide_speed);
  })


  // Submit new proposal
  $(document).on('submit', '#create_proposal', function (e) {

    var proposal_form = $(this);

    proposal_form.find('._error').remove()
    e.preventDefault();

    $.ajaxSetup({
      beforeSend: function () {
        // show gif here, eg:
        $("#loading").show();
      },
      complete: function () {
        // hide gif here, eg:
        $("#loading").hide();
      }
    });

    $.ajax({
      type: 'POST',
      url: '/citizen_proposals/create_proposal',
      dataType: 'json',
      data: {
        title: $(this).find('input[name="proposal_title"]').val(),
        body: $(this).find('textarea[name="proposal_body"]').val(),
        name: $(this).find('input[name="name"]').val(),
        address: $(this).find('input[name="address"]').val(),
        zip_code: $(this).find('input[name="zip_code"]').val(),
        city: $(this).find('input[name="city"]').val(),
        email: $(this).find('input[name="email"]').val(),
      },
      success: function (data) {
        if (data.status == 'success') {
          proposal_form.text(data.message)
        } else {
          if (data.error_message) {
            alert(data.error_message)
          } else {
            alert('Der opstod en ukendt fejl. Prøv igen senere.')
          }
        }

      },
      error: function () {
        var error = $('<div>').addClass('_error').text('Der opstod en fejl. Det kan skyldes at du allerede har oprettet dette forslag.')
        error.insertAfter(proposal_form.find('._headline'))
      },
      beforeSend: function () {
        // show gif here, eg:
        $("#loading").show();
      },
      complete: function () {
        // hide gif here, eg:
        $("#loading").hide();
      }
    })
  })

  // Show/hide proposals.
  $(document).on('click', '#citizen_proposals a.proposal', function () {

    // Close all
    var open = $('#citizen_proposals .proposal_wrapper._open')

    open.find('._body').slideUp(citizen_proposals.slide_speed)

    var wrapper = $(this).closest('.proposal_wrapper')
    var body = wrapper.find('._body')

    if (wrapper.hasClass('_open')) {
      body.slideUp(citizen_proposals.slide_speed)
      wrapper.removeClass('_open')
      // window.location.hash = ''
    } else {
      // Open proposal.
      body.slideDown(citizen_proposals.slide_speed)
      wrapper.addClass('_open')
      window.location.hash = '#' + $(this).closest('.proposal_wrapper').attr('data-nid')
    }

    // Remove '_open' class on all other open proposals.
    open.removeClass('_open')
  })


  // Submit vote
  $(document).on('submit', '#citizen_proposals ._vote_form', function (e) {
    var vote_form = $(this);

    vote_form.find('._error').remove()
    e.preventDefault();

    $.ajax({
      type: 'POST',
      url: '/citizen_proposals/vote',
      dataType: 'json',
      data: {
        vote_for_nid: $(this).closest('.proposal_wrapper').attr('data-nid'),
        name: $(this).closest('._vote_form').find('input[name="name"]').val(),
        address: $(this).closest('._vote_form').find('input[name="address"]').val(),
        zip_code: $(this).closest('._vote_form').find('input[name="zip_code"]').val(),
        city: $(this).closest('._vote_form').find('input[name="city"]').val(),
        email: $(this).closest('._vote_form').find('input[name="email"]').val(),
      },
      success: function (data) {
        if (data.status == 'success') {
          vote_form.text('Din stemme er nu registeret.')
        } else {
          if (data.error_message) {
            alert(data.error_message)
          } else {
            alert('Der opstod en ukendt fejl. Prøv igen senere.')
          }
        }
      },
      error: function () {
        var error = $('<div>').addClass('_error').text('Der opstod en fejl. Det kan skyldes at du allerede har stemt på dette forslag.')
        vote_form.prepend(error)
      }
    })
  });


  citizen_proposals.init()

})

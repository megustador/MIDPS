
$(function() {

  var $reviews = $('#reviews')
  $.ajax({}(

    type: 'GET'
    url: 'http://rest.learncode.academy/api/johnbob/friends',
    succes: function (reviews) {
      $.each(reviews, function (i, item) {
        $reviews.append('<li>name: '+ order.name +', drink: '+ order.drink + '</li>')
      })

    }
    });

});

(function ($) {
  Drupal.behaviors.gsb_feature_voices_ct = {
    attach: function (context, settings) {
      var person_type = ["42756", "42761", "42766", "42771"]; // MBA Alumni, MSx and Sloan Alumni, Exec Ed, Seed
      var location_label = $("label[for*='edit-field-location']");
      if ($.inArray($('input[name=field_person_type[und]]:checked' ).val(), person_type) != -1) {
        location_label.html("Location");
      }

      $('input:radio[name=field_person_type[und]]').change(function() {
        if ($.inArray(this.value, person_type) != -1) {
          location_label.html("Location");
        }
        else {
          location_label.html("Hometown");
        }
      });
    }
  };
})(jQuery);
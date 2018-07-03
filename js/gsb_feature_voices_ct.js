(function ($) {
  Drupal.behaviors.gsb_feature_voices_ct = {
    attach: function (context, settings) {

     $('input:radio[name=field_person_type[und]]').change(function() {
        var person_type = ["42756", "42761", "42766", "42771"]; // MBA Alumni, MSx and Sloan Alumni, Exec Ed, Seed
        if ($.inArray(this.value, person_type) != -1) {
          $("label[for*='edit-field-location']").html("Location");
        }
        else {
          $("label[for*='edit-field-location']").html("Hometown");
        }
      });
    }
  };
})(jQuery);
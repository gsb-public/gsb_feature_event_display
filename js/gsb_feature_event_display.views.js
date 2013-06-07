(function ($) {

/**
 * @file
 * Adds upcoming/past buttons to admission events.
 */
Drupal.behaviors.gsb_feature_event_display_admission_events = {
  attach: function (context, settings) {
    var $view = $('.view-admission-events');
    if ($view.length == 0) {
      return;
    }
    // Hide the date and sort widgets.
    $view.find('.views-widget-filter-field_event_date_value, .views-widget-sort-order').hide();

    // Add the two buttons.
    var $upcomingButton = $('<div class="event-button event-button-upcoming">' + Drupal.t('Admission Events') + '</div>');
    var $pastButton = $('<div class="event-button event-button-past">' + Drupal.t('Past Admission Events') + '</div>');
    $view.find('.event-buttons').once('event-buttons').append($upcomingButton, $pastButton);

    // On click, change the date operator and sort order, and trigger submit.
    $upcomingButton.click(function () {
      $view.find('#edit-date-op').val('>=');
      $view.find('#edit-sort-order').val('ASC');
      $view.find('.ctools-auto-submit-click').click();
    });
    $pastButton.click(function () {
      $view.find('#edit-date-op').val('<');
      $view.find('#edit-sort-order').val('DESC');
      $view.find('.ctools-auto-submit-click').click();
    });
  }
};

}(jQuery));

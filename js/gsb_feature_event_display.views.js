(function ($) {

/**
 * @file
 * Adds upcoming/past buttons to admission events.
 */
Drupal.behaviors.gsb_feature_event_display_admission_events = {
  attach: function (context, settings) {
    var $view;
    var $context = $(context);
    // The view is either the context itself.
    if ($context.hasClass('view-admission-events')) {
      $view = $context;
    }
    else {
      // Or the view is in the context.
      $view = $context.find('.view-admission-events');
      if ($view.length == 0) {
        return;
      }
    }
    // Hide the date and sort widgets.
    $view.find('.views-widget-filter-field_event_date_value, .views-widget-sort-order').hide();

    // Add the two buttons.
    var $upcomingButton = $('<div class="event-button event-button-upcoming">' + Drupal.t('Admission Events') + '</div>');
    var $pastButton = $('<div class="event-button event-button-past">' + Drupal.t('Past Admission Events') + '</div>');
    $view.find('.event-buttons').once('event-buttons').append($upcomingButton, $pastButton);
    $('.event-button-' + settings.gsb_feature_event_display.admission_event_active).addClass('active');

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

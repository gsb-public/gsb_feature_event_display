(function ($) {

/**
 * @file
 * Adds upcoming/past buttons to admission events.
 */
Drupal.behaviors.gsb_feature_event_display_admission_events = {
  attach: function (context, settings) {

    this.initAdmissionsSelectLink();
    this.initTopicSelectLink();
    this.initEventSelectLink();
    this.initRegionSelectLink();

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
  },

  initAdmissionsSelectLink: function() {

    var select_link_admissions = $('.form-item-admissions .bef-select-all-none .bef-toggle');
    if (select_link_admissions.length) {

      var selAll = Drupal.t('Show Only Admission Events');
      var selNone = Drupal.t('Remove Admission Filters');

      var new_select_link = $('.form-item-admissions .bef-select-all-none .not-bef-toggle');
      if (new_select_link.length == 0) {
        select_link_admissions.after('<a class="not-bef-toggle select-all" href="#">'+ selAll +'</a>');
        select_link_admissions.hide();    
        new_select_link = $('.form-item-admissions .bef-select-all-none .not-bef-toggle');    
      }

	  // Retain the select-none
      var totalcheckboxes = $('.form-item-admissions .form-type-bef-checkbox').length;
      $('.form-item-admissions .form-type-bef-checkbox').each(function( index ) {
        if ($( ".form-item-admissions .form-type-bef-checkbox input:checked" ).length == totalcheckboxes){
          new_select_link.text(selNone);
        }
      });

      new_select_link.click(function(event) {

        var new_select_link_classes = new_select_link.attr("class");
        console.log('class = '+new_select_link_classes);

        if (new_select_link_classes.indexOf('select-all') != -1) {
          new_select_link.removeClass('select-all');
          new_select_link.addClass('select-none');
          new_select_link.text(selNone);
        } else if (new_select_link_classes.indexOf('select-none') != -1) {
          new_select_link.removeClass('select-none');
          new_select_link.addClass('select-all');
          new_select_link.text(selAll);
        }

        // Don't actually follow the link...
        event.preventDefault();
        event.stopPropagation();

        select_link_admissions.click();

      });

    } 

  },

  initTopicSelectLink: function() {

    var select_link_topic = $('.form-item-topic .bef-select-all-none .bef-toggle');
    if (select_link_topic.length) {

      var selAll = Drupal.t('Show All Topic-Related Events');
      var selNone = Drupal.t('Remove Topic Filters');

      var new_select_link = $('.form-item-topic .bef-select-all-none .not-bef-toggle');
      if (new_select_link.length == 0) {
        select_link_topic.after('<a class="not-bef-toggle select-all" href="#">'+ selAll +'</a>');
        select_link_topic.hide();    
        new_select_link = $('.form-item-topic .bef-select-all-none .not-bef-toggle');    
      }

	  // Retain the select-none
      var totalcheckboxes = $('.form-item-topic .form-type-bef-checkbox').length;
      $('.form-item-topic .form-type-bef-checkbox').each(function( index ) {
        if ($( ".form-item-topic .form-type-bef-checkbox input:checked" ).length == totalcheckboxes){
          new_select_link.text(selNone);
        }
      });

      new_select_link.click(function(event) {

        var new_select_link_classes = new_select_link.attr("class");
        console.log('class = '+new_select_link_classes);

        if (new_select_link_classes.indexOf('select-all') != -1) {
          new_select_link.removeClass('select-all');
          new_select_link.addClass('select-none');
          new_select_link.text(selNone);
        } else if (new_select_link_classes.indexOf('select-none') != -1) {
          new_select_link.removeClass('select-none');
          new_select_link.addClass('select-all');
          new_select_link.text(selAll);
        }

        // Don't actually follow the link...
        event.preventDefault();
        event.stopPropagation();

        select_link_topic.click();

      });

    }

  },

  initEventSelectLink: function() {

    var select_link_event_type = $('.form-item-event-type .bef-select-all-none .bef-toggle');
    if (select_link_event_type.length) {

      var selAll = Drupal.t('Show All Event Types');
      var selNone = Drupal.t('Remove All Event Type Filters');

      var new_select_link = $('.form-item-event-type .bef-select-all-none .not-bef-toggle');
      if (new_select_link.length == 0) {
        select_link_event_type.after('<a class="not-bef-toggle select-all" href="#">'+ selAll +'</a>');
        select_link_event_type.hide();    
        new_select_link = $('.form-item-event-type .bef-select-all-none .not-bef-toggle');    
      }

	  // Retain the select-none
      var totalcheckboxes = $('.form-item-event-type .form-type-bef-checkbox').length;
      $('.form-item-event-type .form-type-bef-checkbox').each(function( index ) {
        if ($( ".form-item-event-type .form-type-bef-checkbox input:checked" ).length == totalcheckboxes){
          new_select_link.text(selNone);
        }
      });

      new_select_link.click(function(event) {

        var new_select_link_classes = new_select_link.attr("class");
        console.log('class = '+new_select_link_classes);

        if (new_select_link_classes.indexOf('select-all') != -1) {
          new_select_link.removeClass('select-all');
          new_select_link.addClass('select-none');
          new_select_link.text(selNone);
        } else if (new_select_link_classes.indexOf('select-none') != -1) {
          new_select_link.removeClass('select-none');
          new_select_link.addClass('select-all');
          new_select_link.text(selAll);
        }

        // Don't actually follow the link...
        event.preventDefault();
        event.stopPropagation();

        select_link_event_type.click();

      });

    }   

  },  

  initRegionSelectLink: function() {

    var select_link_region = $('.form-item-field-region-tid .bef-select-all-none .bef-toggle');
    if (select_link_region.length) {

      var selAll = Drupal.t('Show Only Regional Events');
      var selNone = Drupal.t('Remove Regional Filters');

      var new_select_link = $('.form-item-field-region-tid .bef-select-all-none .not-bef-toggle');
      if (new_select_link.length == 0) {
        select_link_region.after('<a class="not-bef-toggle select-all" href="#">'+ selAll +'</a>');
        select_link_region.hide();    
        new_select_link = $('.form-item-field-region-tid .bef-select-all-none .not-bef-toggle');    
      }

      new_select_link.click(function(event) {

        var new_select_link_classes = new_select_link.attr("class");
        console.log('class = '+new_select_link_classes);

        if (new_select_link_classes.indexOf('select-all') != -1) {
          new_select_link.removeClass('select-all');
          new_select_link.addClass('select-none');
          new_select_link.text(selNone);
        } else if (new_select_link_classes.indexOf('select-none') != -1) {
          new_select_link.removeClass('select-none');
          new_select_link.addClass('select-all');
          new_select_link.text(selAll);
        }

        // Don't actually follow the link...
        event.preventDefault();
        event.stopPropagation();

        select_link_region.click();

      });

    }
  },

};

}(jQuery));

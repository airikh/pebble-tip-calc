#include <pebble.h>

#include "calculator.h"


static bool debug = true;


void log_grect(GRect grect, char *info) {
  if(debug) {
    APP_LOG(APP_LOG_LEVEL_DEBUG, "GRect: .x = %4d, .y = %4d, .w = %4d, .h = %4d\t(%s)",
            grect.origin.x, grect.origin.y, grect.size.w, grect.size.h, info);
  }
}


void log_gpoint(GPoint gpoint, char *info) {
  if(debug) {
    APP_LOG(APP_LOG_LEVEL_DEBUG, "gpoint %s: .x = %d, .y = %d",
            info, gpoint.x, gpoint.y);
  }

}


void log_gsize(GSize gsize, char *info) {
  if(debug) {
    APP_LOG(APP_LOG_LEVEL_DEBUG, "GSize %s: .w = %d, .h = %d",
            info, gsize.w, gsize.h);
  }
}
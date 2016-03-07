#include <stdlib.h>
#include <math.h>

#include "wind.h"

Wind *sailing_wind_new() {
    Wind *new_wind = calloc(1, sizeof(Wind));

    new_wind->speed = 4;
    new_wind->direction = M_PI_2;

    return new_wind;
}

double sailing_wind_get_speed(const Wind *wind) {
    return wind->speed;
}

double sailing_wind_get_direction(const Wind *wind) {
    return wind->direction;
}

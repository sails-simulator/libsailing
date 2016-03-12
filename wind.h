#ifndef SAILING_WIND_H
#define SAILING_WIND_H

typedef struct wind {
    double speed, direction;
} Wind;

Wind *sailing_wind_new();

double sailing_wind_get_speed(const Wind *wind);

void sailing_wind_set_speed(Wind *wind, double speed);

double sailing_wind_get_direction(const Wind *wind);

void sailing_wind_set_direction(Wind *wind, double direction);

#endif

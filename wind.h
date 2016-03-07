#ifndef SAILING_WIND_H
#define SAILING_WIND_H

typedef struct wind {
    double speed, direction;
} Wind;

Wind *sailing_wind_new();

double sailing_wind_get_speed(const Wind *wind);
double sailing_wind_get_direction(const Wind *wind);

#endif

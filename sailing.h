#ifndef SAILING_H
#define SAILING_H

struct sailing_boat {
    char *name;
    double longitude;
    double latitude;
};

struct sailing_boat *sailing_boat_init();

void sailing_boat_free(struct sailing_boat *boat);

char *sailing_boat_get_name(struct sailing_boat *boat);

double sailing_boat_get_latitude(struct sailing_boat *boat);

double sailing_boat_get_longitude(struct sailing_boat *boat);

#endif

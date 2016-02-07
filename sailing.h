#ifndef SAILING_H
#define SAILING_H

struct boat {
    char *name;
    double longitude;
    double latitude;
};

struct boat *sailing_boat_init();

void sailing_boat_free(struct boat *boat);

char *sailing_boat_get_name(struct boat *boat);

double sailing_boat_get_latitude(struct boat *boat);

double sailing_boat_get_longitude(struct boat *boat);

#endif

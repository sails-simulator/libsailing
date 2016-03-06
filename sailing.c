#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "sailing.h"

Boat *sailing_boat_init(const char *name) {
    Boat *boat = calloc(1, sizeof(Boat));
    boat->name = strdup(name);

    boat->x = 0;
    boat->y = 0;
    boat->angle = M_PI_4;
    boat->sail_angle = 0;
    boat->rudder_angle = 0.2;
    boat->sail_is_free = 0;

    boat->v = 5;
    boat->sheet_length = 0;
    boat->rotational_velocity = 0.0;
    boat->inertia = 10000.0;
    boat->drift_coefficient = 0.05;
    boat->rudder_distance = 4.0;
    boat->angular_friction = 6000;
    boat->mass = 300.0;
    boat->tangential_friction = 0.2;
    boat->mast_distance = 1;
    boat->rudder_lift = 2000.0;
    boat->sail_center_of_effort = 1.0;
    boat->sail_lift = 1000.0;

    return boat;
}

void sailing_boat_free(Boat *boat) {
    free(boat->name);
    free(boat);
}

char *sailing_boat_get_name(Boat *boat) {
  return boat->name;
}

double sailing_boat_get_latitude(Boat *boat) {
    return boat->x;
}

double sailing_boat_get_longitude(Boat *boat) {
    return boat->y;
}

double sailing_boat_get_sail_angle(Boat *boat) {
    return boat->sail_angle;
}

double sailing_boat_get_angle(Boat *boat) {
    return boat->angle;
}

double sailing_boat_get_rudder_angle(Boat *boat) {
    return boat->rudder_angle;
}

#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "boat.h"
#include "physics.h"

Boat *sailing_boat_init(const char *name) {
    Boat *boat = calloc(1, sizeof(Boat));
    boat->name = strdup(name);

    boat->x = 0;
    boat->y = 0;
    boat->angle = M_PI_4;
    boat->sail_angle = 0;
    boat->rudder_angle = 0;
    boat->sail_is_free = 0;

    boat->v = 5;
    boat->sheet_length = 1;
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

char *sailing_boat_get_name(const Boat *boat) {
    return boat->name;
}

double sailing_boat_get_latitude(const Boat *boat) {
    return boat->y;
}

void sailing_boat_set_latitude(Boat *boat, double latitude) {
    boat->y = latitude;
}

double sailing_boat_get_longitude(const Boat *boat) {
    return boat->x;
}

void sailing_boat_set_longitude(Boat *boat, double longitude) {
    boat->x = longitude;
}

double sailing_boat_get_sail_angle(const Boat *boat) {
    return boat->sail_angle;
}

void sailing_boat_set_sail_angle(Boat *boat, double sail_angle) {
    boat->sail_angle = sail_angle;
}

double sailing_boat_get_angle(const Boat *boat) {
    return boat->angle;
}

void sailing_boat_set_angle(Boat *boat, double angle) {
    boat->angle = angle;
}

double sailing_boat_get_rudder_angle(const Boat *boat) {
    return boat->rudder_angle;
}

void sailing_boat_set_rudder_angle(Boat *boat, double rudder_angle) {
    boat->rudder_angle = rudder_angle;
}

double sailing_boat_get_velocity(const Boat *boat) {
    return boat->v;
}

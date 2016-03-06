#include <stdlib.h>
#include <math.h>

#include "boat.h"

double sail_boat_get_angle(const struct boat *boat) {
    return boat->angle;
}

double sail_boat_get_rudder_angle(const struct boat  *boat) {
    return boat->rudder_angle;
}

double sail_boat_get_sail_angle(const struct boat *boat) {
    return boat->sail_angle;
}

double sail_boat_get_velocity(const struct boat *boat) {
    return boat->v;
}

struct boat *sail_boat_new() {
    struct boat *new_boat = malloc(sizeof(struct boat));

    return new_boat;
}

void sail_boat_free(struct boat *boat) {
    free(boat);
}

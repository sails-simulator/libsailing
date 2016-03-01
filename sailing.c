#include <stdlib.h>
#include <string.h>

#include "sailing.h"

struct sailing_boat *sailing_boat_init(const char *name) {
    struct sailing_boat *boat = calloc(1, sizeof(struct sailing_boat));
    boat->name = strdup(name);
    boat->longitude = 0;
    boat->latitude = 0;

    return boat;
}

void sailing_boat_free(struct sailing_boat *boat) {
    free(boat->name);
    free(boat);
}

char *sailing_boat_get_name(struct sailing_boat *boat) {
  return boat->name;
}

double sailing_boat_get_latitude(struct sailing_boat *boat) {
    return boat->latitude;
}

double sailing_boat_get_longitude(struct sailing_boat *boat) {
    return boat->longitude;
}

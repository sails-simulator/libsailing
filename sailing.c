#include <stdlib.h>
#include <string.h>

#include "sailing.h"

struct boat *sailing_boat_init(const char *name) {
    struct boat *boat = calloc(1, sizeof(struct boat));
    boat->name = strdup(name);

    return boat;
}

void sailing_boat_free(struct boat *boat) {
    free(boat->name);
    free(boat);
}

char *sailing_boat_get_name(struct boat *boat) {
  return boat->name;
}

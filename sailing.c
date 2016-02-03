#include <stdlib.h>
#include <string.h>

#include "sailing.h"

struct boat *sailing_boat_init(const char *name) {
  struct boat *boat = calloc(1, sizeof(struct boat));
  boat->name = strndup(name, strlen(name));
}

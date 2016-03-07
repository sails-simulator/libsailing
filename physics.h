#ifndef SAILING_PHYSICS_H
#define SAILING_PHYSICS_H

#include "wind.h"
#include "boat.h"

void sailing_physics_update(Boat *boat, const Wind *wind, const double dt);

#endif

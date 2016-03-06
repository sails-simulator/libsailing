#ifndef BOAT_H_
#define BOAT_H_

struct *boat sail_boat_new();
void sail_boat_free(struct boat *boat);

double sail_boat_get_angle(const struct boat *boat);
double sail_boat_get_rudder_angle(const struct boat *boat);
double sail_boat_get_sail_angle(const struct boat *boat);
double sail_boat_get_velocity(const struct boat *boat);

#endif

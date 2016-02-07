#include <setjmp.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#include <cmocka.h>

#include "sailing.h"


static void null_test_success(void **state) {
    (void) state;
}

static void test_sailing_boat_init(void **state) {
    struct boat *boat = sailing_boat_init("Dewi");
    assert_string_equal("Dewi", boat->name);
}

static void test_sailing_boat_init_malloc_name(void **state) {
  char *name = malloc(7);
  strcpy(name, "01test");
  struct boat *boat = sailing_boat_init(name);
  assert_string_equal("01test", boat->name);
  free(name);
}

static void test_sailing_boat_free(void **state) {
    struct boat *boat = sailing_boat_init("Dewi");
    sailing_boat_free(boat);
}

static void test_sailing_boat_get_name(void **state) {
    struct boat *boat = sailing_boat_init("Dewi");
    assert_string_equal("Dewi", sailing_boat_get_name(boat));
    sailing_boat_free(boat);
}

static void test_sailing_boat_get_latitude(void **state) {
    struct boat *boat = sailing_boat_init("Dewi");
    assert_true(abs(sailing_boat_get_latitude(boat)) < 0.001);
    sailing_boat_free(boat);
}

static void test_sailing_boat_get_longitude(void **state) {
    struct boat *boat = sailing_boat_init("Dewi");
    assert_true(abs(sailing_boat_get_longitude(boat)) < 0.001);
    sailing_boat_free(boat);
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(null_test_success),
        cmocka_unit_test(test_sailing_boat_init),
        cmocka_unit_test(test_sailing_boat_init_malloc_name),
        cmocka_unit_test(test_sailing_boat_free),
        cmocka_unit_test(test_sailing_boat_get_name),
        cmocka_unit_test(test_sailing_boat_get_latitude),
        cmocka_unit_test(test_sailing_boat_get_longitude),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}

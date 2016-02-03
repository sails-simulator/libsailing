#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "sailing.h"


static void null_test_success(void **state) {
    (void) state;
}

static void test_sailing_boat_init(void **state) {
  struct boat *boat = sailing_boat_init("Dewi");
  assert_string_equal("Dewi", boat->name);
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(null_test_success),
        cmocka_unit_test(test_sailing_boat_init),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}

#include "cutest.h"
#include "your_task.h"


void test_task(void) {
    TEST_CHECK(sum_function(0, 8) == 8);
    TEST_CHECK(sum_function(10, 2) == 12);
}

// This tesl will fail, that's OK
void test_generate_fail(void) {
    /* This condition is designed to fail so you can see its output. */
    int const a = 1;
    int const b = 2;
    TEST_CHECK_(a + b == 5, "%d + %d == 5", a, b);
}

// This tesl will fail, that's OK
void test_generate_crash(void) {
    int* invalid = ((int*)NULL) + 0xdeadbeef;

    *invalid = 42;
    TEST_CHECK_(1 == 1, "We likely never get here, due to the crash above.");
}

TEST_LIST = {
        { "task",           test_task },
        { "generate_fail",  test_generate_fail },
        { "generate_crash", test_generate_crash },
        { 0 }
};

// Note that there's no main function here

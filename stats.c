#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    setlength = sizeof(numberset) / sizeof(numberset[0]);
    struct Stats {
    int average = 0;
    int min = 0;
    int max = 0;
}s;
    return 0;
}


int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

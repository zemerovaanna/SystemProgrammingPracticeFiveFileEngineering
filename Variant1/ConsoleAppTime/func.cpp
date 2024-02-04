#include "func.h"
struct Time {
    int h; int m; int s;
};

int getTimeUntilSunset(int h, int m, int s, bool strct) {
    Time t;
    t.h = h;
    t.m = m;
    t.s = s;
    return 24 * 60 - t.m - (t.h) * 60 - (t.s) / 60;
}

int getTimeUntilSunset(int h, int m, int s) {
    return 24 * 60 - m - h * 60 - (int)s / 60;
}

int getTimeUntilSunset(int h, int m) {
    return 24 * 60 - m - h * 60;
}
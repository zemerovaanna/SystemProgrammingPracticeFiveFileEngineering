#include "sunsettime.h"

int getTimeUntilSunset(int h, int m, int s)
{
    int hours = 24 - h;
    int minutes = 60 - m;
    int seconds = 60 - s;
    return (hours * 60) + minutes + (seconds / 60);
}

int getTimeUntilSunset(int h, int m)
{
    int hours = 24 - h;
    int minutes = 60 - m;
    return (hours * 60) + minutes;
}
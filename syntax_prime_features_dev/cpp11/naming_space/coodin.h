#ifndef COODIN_H
#define COODIN_H

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect reactor);

void show_polar(polar polar);

#endif
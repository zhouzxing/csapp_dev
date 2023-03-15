#include <iostream>
#include <cmath>
#include "coodin.h"

polar rect_to_polar(rect reactor)
{   
    polar polar;

    polar.distance = sqrt(reactor.x * reactor.x + reactor.y * reactor.y);
    polar.angle = atan2(reactor.y , reactor.x);

    return polar;

}

void show_polar(polar polar)
{
    using namespace std;
    cout << "distance:" << polar.distance<< endl
        << "angle:" << polar.angle <<endl;

}
#include <iostream>
#include <fstream>
#include "mytime.h"

void replay(Timer &timer);

int main()
{
    using namespace std;
    Timer design(3,30);
    Timer coding(1,20);

    // design.show();
    // coding.show();
    (design + coding).show();

    // design.operator+(coding).show();
    
    // (design * 2.0).show();
    (2.0 * design).show();
    operator*(1.5,design).show();

    std::cout<< design << std::endl
        << coding << std::endl;
    ofstream fout;
    fout.open("save.opt");

    fout<< design << std::endl
        << coding << std::endl;
    
    return 0;
}

void replay(Timer &timer)
{
    timer.show();
}
#include <iostream>
using namespace std;

extern double warming;

void update(double d_value)
{

    warming += d_value;
    cout << "global file value:"<< warming << endl;
}
void local()
{
    double warming = 8.8;

    cout << "auto local value:"<< warming << endl;

    cout << "global file value:"<< ::warming << endl;

}
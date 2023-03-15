#include <iostream>
#include <valarray>

using namespace std;

int main()
{

    double gpa[5] = {3.4,3.5,3.8,4.0};
    valarray<double> v1;
    valarray<int> v2(8);
    valarray<int> v3(10,8);

    // cout << v3 << endl;

    return 0;
}
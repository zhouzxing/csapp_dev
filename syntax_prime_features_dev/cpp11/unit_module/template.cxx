#include <iostream>

using namespace std;

template <typename T>
void swap_(T &a, T &b);



int main()
{
    int a = 4, b = 3;
    swap_(a,b);
    cout << a << ":" << b <<endl;

    double c = 20.0,d = 10;
    swap_(c,d);
    cout << c << ":" << d <<endl;

    return 0;
}

template <typename T>
void swap_(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
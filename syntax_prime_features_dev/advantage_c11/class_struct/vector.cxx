#include <iostream>
#include <array>
#include <vector>

int main()
{
    using namespace std;

    double a1[] = {1.2,3.4,5.8};
    vector<double> vec(3); //= {1.8}; //不支持初始化
    vec[0] = 3.6;

    // vector<double> vec1(3) = vec;//不支持赋值

    array<double,3> arr = {1.8,3.6,8.8};

    array<double,3> arr1 = arr;


    cout<< arr[0] << ":" << &arr[0]<<endl;
    cout<< arr1[0] << ":" << &arr1[0]<<endl;

    a1[-2] = 88;
    vec[-2] = 88;


    arr[-2] = 88;
    arr1[-2] = 88;
    cout<< a1[-2] << ":" << &a1[-2]<<endl;
    cout<< vec[-2] << ":" << &vec[-2]<<endl;
    cout<< arr[-2] << ":" << &arr[-2]<<endl;
    cout<< arr1[-2] << ":" << &arr1[-2]<<endl;

    return 0;
}

#include <iostream>
using namespace std;

int sum(int(*)[4],int);

int main()
{
    // int value = 1;
    // int *p = &value;

    // cout << value << &value << endl
    //     << *p << p << endl;
    // *p = *p +1;


    // cout << value << &value << endl
    //     << *p << p << endl;


    // int *p = new int;

    // int arr[5] = {1,2,3,4,5};

    // int *p = arr;

    // int (*p_arr)[5] = &arr;
    // int *p_arr1[5] = {p,p+1,p+2};

    // int num = 10;
    // int * p_num = &num;

    // *p_num += 1;
    // cout << *p_num << p_num <<endl
    //     << num << &num << endl;
    
    // const int *p_num1 = &num;
    // num += 1;
    // cout << *p_num1 << p_num1 <<endl
    //     << num << &num << endl;

    // *p_num1 += 1;
    // cout << *p_num1 << p_num1 <<endl
    //     << num << &num << endl;

    /* 
        常量指针：const int* p -> 声明：p指向常量，本质不一定是常量

    */

//    int age = 18;
//    int * pd = &age;
//    const int * pt = pd;

//     // **pt += 1;
//     *pd += 1;
//     cout << age << &age << endl
//         << *pd << pd << endl
//         // << **pt << *pt << endl
//         << *pt << pt << endl;

//     pd += 1;
//     cout << age << &age << endl
//         << *pd << pd << endl
//         // << **pt << *pt << endl
//         << *pt << pt << endl;

    // const int **p2;
    // int *p1;
    // const int n = 18;
    // p2 = &p1;
    // *p2 = &n;

    // *p1 = 10;
    // cout << n << &n << endl
    //     << *p1 << p1 << endl
    //     << **p2 << *p2 << endl
    //     << p2;


    // int a = 1;
    // const int *p = &a;
    // // *p += 1;


    // int * const p1 = &a;
    // int b = 2;
    // // p1 = &b;
    // p = &b;


    int data[3][4] = {
        {12,4,5,5},
        {1,2,3,4},
        {5,6,7,8}
    };

    int (*p)[4];

    int total = sum(data,3);

    return 0;
}
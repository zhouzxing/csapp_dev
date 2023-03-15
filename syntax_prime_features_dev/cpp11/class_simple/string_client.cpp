#include <iostream>
#include "string0.h"
using namespace std;

int main()
{
    {
        String0 s0;
        char char_arr[] = {"hello world"};
        String0 s1(char_arr);
        // String0 s1("hello world"); //ISO C++ forbids converting a string constant to ‘char*’
        cout << "s1:" <<s1 << endl;

        //复制构造
        String0 s2 = s1;//3

        //赋值运算符
        String0 s3; //4
        s3 = s1; //4

        cout <<"s2:" << s2 << "address:" << &s2 << endl;
        cout <<"s1:" << s1 << "address:" << &s1 << endl;
        cout <<"s3:" << s3 << "address:" << &s3 << endl;
    }
    cout << "bye...."<<endl;
    return 0;
}
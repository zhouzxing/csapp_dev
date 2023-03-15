#include <iostream>
#include <cstring>
using namespace std;

// void show();
// 测试自动变量，与静态无连接的初始值问题
int main()
{

    // show();

    // int a = 1;
    // int &b = a;

    // cout << a <<":" << &a << endl
    //     << b << ":" << &b << endl;
    // // -> 引用不占空间？


    // char str[] = "hello world!";
    // char *p_str = str;
    // cout << "c string :" << strlen(p_str)<<endl;

    // while (p_str && *p_str)
    // {
    //     cout << *p_str;
    //     p_str++;
    // }
    // p_str = str;
    // cout << p_str << endl;
    // cout << str << endl;

    // char *p_char = new char[12];
    // string str("hello world!");
    // cout << str << endl;
    // p_char = str;
    // strcpy(p_char,str);

    while (1)
    {
        cout << std::rand() << endl;
    }
    

}

void show()
{
    int a;
    cout << a << ": " << &a << endl;

    static int b;
    cout << b << ": " << &b << endl;

}

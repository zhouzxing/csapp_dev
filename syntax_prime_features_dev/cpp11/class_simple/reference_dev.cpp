#include <iostream>

int main()
{
    //测试引用：左值引用，右值引用，万能引用 || 区别指针，万能指针
    /*
        左值引用：值相等，且引用地址=引用对象地址 [左值-数据表达式左侧 |const 特例]
        右值引用： [右值-不能应用地址运算符的-赋值表达式右侧]


        指针：指针值 = 引用对象值；指针地址 != 引用对象地址
        万能指针：auto *, 堆分配空间存在， 核心-类型自动推导

    */
    using namespace std;

    double d_num = 10.8;
    double &lrd_num = d_num;
    double &&rrd_num = d_num + .8;

    cout << "before:\n";
    cout << d_num << ":" << &d_num << endl;
    cout << lrd_num << ":" << &lrd_num << endl; //地址值一样，好奇左值引用如何实现别名？[内存未存？]
    lrd_num += .8;
    cout << "after:\n";
    cout << d_num << ":" << &d_num << endl;
    cout << lrd_num << ":" << &lrd_num << endl;

    //移动语义-
    cout << rrd_num << ":" << &rrd_num << endl;


    d_num = 8.8;



   
    return 0;
}
#include <iostream>
// #include <cstring>
#include <string>

using namespace std;

void test(int arr[],int length);
// void swap12(int& a,int& b);
void swap12(const double& a,const double& b);
void swap34(string& a,string& b);
int test_r(int& a);
struct free_throws{
    double costs;
    string design;
};

template <typename T>
void Swap(T&a,T&b);

template<> void Swap(free_throws& rf1,free_throws& rf2);

void show(const free_throws& rf);

const free_throws& clone(free_throws& rf);

int main()
{
    // char str[13] = {"hello world!"};//自动检查长度-编译器
    // strcat(str,"c++ oob");
    // cout << str;

    // int age;
    // cout << "name:";
    // (cin >> str).get();
    // char address[100];
    // cout << "address:";
    // // cin >> address; //ok

    // cin.getline(address,80); //getline()问题 -> cin将换行符留在缓冲区 //从源头-其次-最后

    // cout << "age:";
    // cin >> age;

    // cout << "name:" << str << " address:" << address << " age:" << age << endl;

    // int a = 4;
    // double b = 8.8f;
    // cout << a << ":" << &a <<endl;
    // cout << b << ":" << &b <<endl;

    // int tao[8] = {1,2,3,8};
    // int* p0 = tao;
    // int*p3 = &tao[3];

    // cout << "p3: " << p3 << " p0 : " << p0<<endl;
    // cout << "p3-p0: " << p3-p0 <<endl;


    //测试数组
    // int arr[3] = {8,9,7};
    // // int dd[3];// arr1;// = {3,4,6};
    // int length = sizeof(arr) / sizeof (int);
    // test(arr,length);
    // for(int i=0;i<length;i++){
    //     cout << arr[i] << " ";
    // }

    // int* p_arr = arr;
    // cout << sizeof p_arr <<endl;
    // cout << sizeof arr <<endl;

    // int n = 3;
    // int* p_n = &n;
    // cout << sizeof(int) << " : "<< sizeof p_n << endl;


    //引用：临时变量-
    // int a = 8,b = 9;
    // cout << "&a:" << &a << "\n&b:" << &b << endl;
    // swap12(a,b); //类型转换问题
    // cout << "a:"<<a<<" b:"<<b<<endl;

    // char str[12] = "hello";
    // string str0 = "HELLO";
    // swap34(str0,"+++");

    // int c = 10;
    // int d = test_r(c+1);

    free_throws test1 {88.88,"分布式"};
    free_throws test2 {99.88,"存储"};
    
    // free_throws a = clone(test);
    // a.costs = 99.99;
    // cout << test.costs << endl;

    //测试模板
    // int i = 8,j = 9;
    // double m = 1.2,n = 5.6;
    // Swap(i,j);
    // Swap(m,n);

    // cout << "i: " << i << " j: " << j <<endl;
    // cout << "m: " << m << " n: " << n <<endl;

    Swap(test1,test2);
    show(test1);


    return 0;
}

const free_throws& clone(free_throws& rf)
{
    // free_throws* pf;// = rf;
    // *pf = rf;

    // free_throws* pf = &rf;
    free_throws* new_free = new free_throws;
    new_free->costs = rf.costs;
    new_free->design = rf.design;
    return *new_free;
}

int test_r(int& a)
{
    return a++;
}

void swap34(string& a,const string& b)
{
    cout << "&a:" << &a << "\n&b" << &b << endl;
    string temp = a;
    a = b;
    // b = temp;
}
void swap12(const double& a,const double& b)
{
    cout << "&a:" << &a << "\n&b" << &b << endl;
    double temp = a;
    // a = b;
    // b = temp;
}

// void swap12(int& a,int& b)
// {
//     cout << "&a:" << &a << "\n&b:" << &b << endl;
//     int temp = a;
//     a = b;
//     b = temp;
// }

void test(int* arr1,int length)
{
    // int length1 = sizeof(arr) / sizeof (int);
    // cout << length<<endl;
    cout << sizeof arr1<<endl;

    for(int i=0;i<length;i++){
        arr1[i] = arr1[i] + 8;
    }
}


template <typename T>
void Swap(T&a,T&b)
{
    cout << sizeof (T) << endl;
    T temp;
    temp = a;
    a = b;
    b = temp;
}


template<> void Swap(free_throws& rf1,free_throws& rf2)
{
    double temp = rf1.costs;
    rf1.costs = rf2.costs;
    rf2.costs = temp;
}

void show(const free_throws& rf)
{
    cout<< rf.costs << ":"<<rf.design<<endl;
}
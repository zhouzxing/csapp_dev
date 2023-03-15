#include <iostream>

using namespace std;

const string & version(string & s1, const string & s2);
void swap(int &, int &);

int main()
{
    // int a=5 ,b = 4;

    // cout << a << ":" << b << endl;
    
    // swap(a,b);

    // cout << a << ":" << b << endl;


    // double && rref = abs(123);

    // double j = 15.0;

    // double && jref = 2.0 * j + 18.3;

    // cout << rref << ":" << jref;

    // int * p = new int;
    // *p = 3;
    // cout << *p;

    // void * q = malloc(sizeof(int));

    string a = "a,";
    // version("a,","b.");
    version(a,"b.");

    return 0;
}

const string & version(string & s1, const string & s2)
{
    string temp;
    temp = s1 + s2;
    return temp;
}

void swap(int &l, int &r)
{
    int temp = l;
    l = r;
    r = temp;
}
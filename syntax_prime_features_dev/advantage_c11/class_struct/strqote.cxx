#include <iostream>
#include <string>
using namespace std;

void version1(const string& s0,const string& s1);
void version2(const string& s0,const string& s1);
string& version3(const string& s0,const string& s1);
int main()
{
    string s0 = "hello";
    // string copy = s0;
    // cout << &copy << " : " << copy << endl;
    // cout << &s0 << " : " << s0 << endl;

    // version1(s0,"+++");

    // char char_arr[] = "+++";
    // const char* p_str = char_arr;
    // version1(s0,p_str);
    // cout << p_str << " : " << *p_str << endl;

    version3(s0,"++");
}


void version1(const string& s0,const string& s1)
{
    cout<< &s1 << " : " << s1 << endl;

    string temp;
    temp = s1 + s0 + s1;

}
void version2(const string& s0,const string& s1);
string& version3(const string& s0,const string& s1)
{
    string temp = s0 + s1;

    return temp;
}
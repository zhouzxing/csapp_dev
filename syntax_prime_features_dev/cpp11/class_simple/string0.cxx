#include <iostream>
#include "string0.h"
#include <cstring>
int String0::count_obj = 0;

String0::String0()
{
    length = 4;
    p_str = new char[length];
    std::strcpy(p_str,"c++");

    count_obj++;
    std::cout << "default constructed: "<< p_str << " count: "<< count_obj << std::endl;
}


String0::String0(char *p)
{
    using namespace std;
    length = std::strlen(p);
    
    p_str = p;//无效指针问题，new
    p_str = new char[length + 1];
    std::strcpy(p_str,p);

    count_obj++;
    std::cout << "parameter constructed" << p_str <<" count:" << count_obj << std::endl;
}

String0::String0(const String0 &str)
{
    length = str.length;
    p_str = new char[length+1];
    std::strcpy(p_str,str.p_str);
    count_obj++;
    std::cout << "复制构造...: " << p_str <<": " << count_obj << std::endl;
}

String0::~String0()
{
    std::cout << "desconf: "<< p_str <<" :...count:" << count_obj<<std::endl;
    delete []p_str;
    length = 0;
    count_obj--;
}

String0& String0::operator=(const String0 &str)
{
    if (this == &str)
        return *this;
    delete []p_str;

    length = str.length;
    p_str = new char[length + 1];
    strcpy(p_str,str.p_str);
    std::cout << "赋值运算符...:" << p_str << std::endl;
    return *this;
}

std::ostream& operator<<(std::ostream &os , const String0 &string)
{
    // char *temp = string.p_str;
    // while (temp && *temp)
    // {
    //     os << *temp;
    //     temp++;
    // }    
    os<< string.p_str;
    return os;
}
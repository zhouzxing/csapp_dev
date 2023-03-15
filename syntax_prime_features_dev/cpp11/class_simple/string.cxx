#include <iostream>
#include <cstring>

#include "string.h"

/**
 * 服务端暴漏接口-更新迭代
*/

int String::count = 0;

String::String()
{
    length = 0;
    // p_string = new char[1];
    // p_string[0] = '\0';
    p_string = nullptr; //null pointer
    count++;
}

String::String(const String& string)
{
    std::cout<<"复制构造: " << string.p_string << std::endl;
    length = std::strlen(string.p_string);
    p_string = new char[length + 1];
    std::strcpy(p_string,string.p_string);
    count++;
}

String::String(const char* p_str)
{
    std::cout<<"指针构造: " << p_str << std::endl;
    length = std::strlen(p_str);
    p_string = new char[length + 1];
    std::strcpy(p_string,p_str);
    count++;
}
String::~String()
{
    // std::cout<<"析构："<<p_string<<std::endl;
    delete[] p_string;
    count--;
}

//运算符:算数，关系，移位运算符...
String& String::operator=(const String& string)
{
    std::cout<<"赋值运算符："<<string.p_string<<std::endl;
    delete []p_string;

    length = std::strlen(string.p_string);
    p_string = new char[length + 1];
    std::strcpy(p_string,string.p_string);
    count++;
    return *this;
}

String& String::operator=(const char*p_str)
{
    std::cout<<"赋值运算符："<< p_str <<std::endl;
    delete []p_string;

    length = std::strlen(p_str);
    p_string = new char[length + 1];
    std::strcpy(p_string,p_str);
    count++;
    return *this;
}

bool String::operator<(const String& string)
{
    if (std::strcmp(p_string,string.p_string) < 0)
        return true;
    else
        return false;
}

bool String::operator>(const String& string)
{
    return !(*this < string);
    // return not this->operator<(string);
    // return (std::strcmp(p_string, string.p_string) > 0);
}

bool String::operator==(const String& string)
{
    return (std::strcmp(p_string,string.p_string) == 0);
}

/**
 * client 负责 index < length
*/
char& String::operator[](int i)
{
    return *(p_string+i);
}

const char& String::operator[](int i) const
{
    return *(p_string+i);
}

//友元-支持输入输出
std::istream& operator>>(std::istream &is,String &str)
{
    str.p_string = new char[String::MAX_STR];
    is.get(str.p_string,String::MAX_STR);
    if (is)
    {
        while (is.get() != '\n')
            continue;
    }
    return is;
}

std::ostream& operator<<(std::ostream &os,const String &str)
{
    os << str.p_string;
    return os;
}


bool operator<(const String& left,const String& right)
{
    if (std::strcmp(left.p_string,right.p_string) < 0)
        return true;
    else
        return false;    
}

bool operator>(const String& left,const String& right)
{
    return right < left;
}

bool operator==(const String& left,const String& right)
{
    return (std::strcmp(left.p_string,right.p_string) == 0);    
}

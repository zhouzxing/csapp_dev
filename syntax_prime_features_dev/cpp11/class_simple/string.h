#ifndef STRING_H_
#define STRING_H_

#include <iostream>

class String
{
private:
    //静态常量
    unsigned static int const MAX_STR = 256;
    char *p_string;
    unsigned int length;
    //支持类成员
    static int count;


public:
    String();
    String(const String&);
    String(const char*);

    ~String();

    //运算符:算数，关系，移位运算符... ->友元函数优势：左右值 + 自动类型转换 + 构造函数
    String& operator=(const String&); //优化空间
    String& operator=(const char*); //优化->不断构造
    
    bool operator<(const String&);
    bool operator>(const String&);
    bool operator==(const String&);
    char& operator[](int i);
    const char& operator[](int i) const;

    //友元-支持输入输出
    friend std::istream& operator>>(std::istream &is,String &str);
    friend std::ostream& operator<<(std::ostream &is,const String &str);

    friend bool operator<(const String&,const String&);
    friend bool operator>(const String&,const String&);
    friend bool operator==(const String&,const String&);

    //功能接口
    unsigned int Length() {return length;};

    //支持类成员函数
    static int class_fun(){std::cout<<"类方法"<<std::endl;return count;}
};

#endif
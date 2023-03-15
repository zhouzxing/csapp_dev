#ifndef STRING0_H_
#define STRING0_H_

#include <iostream>

class String0{
private:
    //静态常量
    static const int MAX_LENGTH_ = 100;
    enum {MAX_LENGTH=150};
    static int count_obj; //类静态成员：计数器

    char *p_str;
    unsigned long length;

public:
    String0();
    String0(char *p);
    String0(const String0 &str);

    ~String0();
    
    String0& operator=(const String0 &str);

    //输出运算符重载
    friend std::ostream& operator<<(std::ostream &os , const String0 &string);

};

#endif
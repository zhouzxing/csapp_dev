#ifndef STUDENT_PRIVATE_H_
#define STUDENT_PRIVATE_H_
#include <iostream>
#include<string>
#include<valarray>

using std::ostream;
using std::istream;
using std::cout;
using std::cin;
using std::endl;

using std::string;
typedef std::valarray<double> array;

class student : private string,private array
{
private:
    ostream& arr_out(std::ostream& os) const;

public:
    student():string("macro"),array(){};
    explicit student(const string& str):string(str),array(){};
    explicit student(int n):string("macro"),array(n){};
    
    student(const string& str, int n):string(str),array(n){};
    student(const string& str, double* pd,int n):string(str),array(pd,n){};
    student(const string& str, const array& ar):string(str),array(ar){};
    student(const char* p_char, int n):string(p_char),array(n){};
    student(const char* p_char, double* pd,int n):string(p_char),array(pd,n){};
    student(const char* p_char, const array& ar):string(p_char),array(ar){};

    ~student(){};

    const string& getName() const;
    double average() const;

    double& operator[](int i);
    double operator[](int i) const;

    friend istream& operator>>(istream& is, student& stu);
    friend istream& getline(istream& is, student& stu);
    friend ostream& operator<<(ostream& os, const student& stu);

};



#endif
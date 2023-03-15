#ifndef STUDENT_H_
#define STUDENT_H_

#include<iostream>
#include<string>
#include<valarray>

using std::cout;
using std::endl;
using std::ostream;
using std::istream;
using std::cout;
using std::cin;

class student
{
private:
    typedef std::valarray<double> array;
    std::string name;
    array scores;

protected:
    std::ostream& arr_out(std::ostream& os) const;
    
public:    
    student():name("null name"),scores(){};

    explicit student(const std::string& str):name(str),scores(){};
    explicit student(int n):scores(n){};
    
    student(const std::string& str,int n):name(str),scores(n){};
    student(const std::string& str,const array& scor):name(str),scores(scor){};
    student(const char* p_name, const double* p_num,int n):name(p_name),scores(p_num,n){};
    ~student(){};

    const std::string& getName() const{return name;};
    double average() const;

    double& operator[](int i);
    double operator[](int i) const;

    friend std::istream& operator>>(std::istream& is, student& stu);
    friend std::istream& getline(std::istream& is, student& stu);
    friend std::ostream& operator<<(std::ostream& os, const student& stu);

};


#endif
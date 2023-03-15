#ifndef BASE_H_
#define BASE_H_

#include <iostream>
#include <string>

class base
{
private:
    std::string name;

public:
    base(const std::string str):name(str){};
    virtual ~base(){std::cout<<"~base..."<<std::endl;};

    virtual void show(){std::cout<<"base:"<<name<<std::endl;};
    virtual void show(int i){std::cout<<"base:"<<name << " i : " << i <<std::endl;};
};

class derived : public base
{
public:
    derived(const std::string str):base(str){};
    virtual void show();
};


#endif

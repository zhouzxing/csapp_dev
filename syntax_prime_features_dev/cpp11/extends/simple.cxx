#include <iostream>
#include "simple.h"

simple::simple(const std::string& fn,const std::string& ln,bool fg):fname(fn),lname(ln),flag(fg)
{}
// simple::simple(std::string& fn,std::string& ln,bool fg):fname(fn),lname(ln),flag(fg)
// {}

void simple::name() const
{std::cout<< fname <<" "<< lname << std::endl;}

//动态调用
void simple::show()
{
    std::cout << "base.." <<std::endl;
}

void diff_simple::show()
{
    std::cout << "derived.." <<std::endl;
}
void simple::show_hide()
{
    std::cout << "base hide.." <<std::endl;
}

//确实覆盖
void diff_simple::show_hide()
{
    std::cout << "derived hide.." <<std::endl;
}

void diff_simple::show_hide(int i)
{
    std::cout << "derived.. i : " << i <<std::endl;
}

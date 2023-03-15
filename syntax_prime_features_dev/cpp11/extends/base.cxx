#include<iostream>
#include "base.h"

void derived::show()
{
    std::cout<<"derived"<<std::endl;
    base::show();
}
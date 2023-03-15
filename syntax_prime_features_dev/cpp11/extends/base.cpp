#include<iostream>
#include "base.h"

int main()
{
    base o_base("hello");
    // o_base.show();
    // o_base.show(1);

    derived o_derived("hello");
    // o_derived.show();
    // o_derived.show(1);

    base &r_o_base = o_base;
    // r_o_base.show();
    // r_o_base.show(2);

    base *p_o_base = &o_derived;
    p_o_base->show();
    p_o_base->show(2);

    return 0;
}
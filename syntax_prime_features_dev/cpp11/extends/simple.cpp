#include <iostream>
#include "simple.h"

using namespace std;

int main()
{
    // simple s("xing","zhou",true);
    // s.show();

    char f[] = "xing";
    char* p_f = f;

    string str("zhou");
    string& r_str = str;

    // simple s1(f,f,true);
    // simple s1(p_f,p_f,true);
    simple s1(p_f,r_str,true);
    s1.name();
    // s1.show();
    
    simple s2(s1);
    simple s3 = s1;

    diff_simple ds0(p_f,r_str,true,5);
    // diff_simple ds(s1);
    // ds.show();

    diff_simple ds2(ds0);
    // ds2.show();

    simple& r_s = s1;
    r_s.show();
    simple& r_ds = ds2;
    r_ds.show();

    r_ds.show_hide();
    ((diff_simple)r_ds).show_hide();
    ((diff_simple)r_ds).show_hide(8);
    
    //可见 -> 抽象类
    ((diff_simple)r_ds).show_protected();
    

    return 0;
}
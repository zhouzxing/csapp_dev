#include <iostream>
#include "stock00.h"

Stock::Stock()
{
    std::cout << company << "...default..."<<std::endl;
    this->company = "default name";
    this->shares = 0L;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout << company << "...constructor..."<<std::endl;
    company = co;
    if (n < 0)
    {
        std::cout<< "购买数量不能少于0：最小为0"<< std::endl;
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_total();
}

Stock::~Stock()
{
    std::cout << company << "...bye..."<<std::endl;
}


void Stock::acquire(const std::string &co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout<< "购买数量不能少于0：最小为0"<< std::endl;
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_total();
    
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout<<"至少购买大于0"<< std::endl;
    }
    else
    {
        shares += num;
        share_val = price;
        set_total();
    }

}

void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        std::cout<<"至少卖出大于0"<< std::endl;
    }
    else if(num > shares)
    {
        std::cout<<"至多卖出总持有量:"<< shares << std::endl;
    }
    else
    {
        shares -= num;
        share_val = price;
        set_total();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_total();
}

void Stock::show()
{
    using std::ios_base;
    using std::cout;

    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << " company : "<< company
        << " shares : " << shares
        << " price : $" << share_val;
    cout.precision(2);
    cout << " total : $" << total_val<<std::endl;

    //restore
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock
{

private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_total(){total_val = shares * share_val;}

public:
    //增加构造与析构
    Stock();
    Stock(const std::string & co, long n, double pr);
    ~Stock();
    
    void acquire(const std::string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif
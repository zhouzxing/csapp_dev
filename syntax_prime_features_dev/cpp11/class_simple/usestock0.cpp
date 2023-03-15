#include <iostream>
#include "stock00.h"

int main()
{
    // Stock t_stock;
    // t_stock.acquire("Tesla",20,12.50);
    // t_stock.buy(30,20.5);
    // t_stock.show();
    // t_stock.sell(300,18.5);
    // t_stock.show();

    // t_stock.buy(3000000,22.5123);
    // t_stock.show();
    // t_stock.sell(200000,1.3455);
    // t_stock.show();

    {
        //测试析构|构造
        Stock stock_def;
        // Stock *stock_def1 = new Stock;

        Stock stock_con = Stock("Apple",12,12.3);
        // Stock *stock_con_ = new Stock("Apple",12,12.3);
        // Stock stock_con1 = Stock{"Apple",12,12.3};
        // Stock *stock_con1_ = new Stock{"Apple",12,12.3};

        //
        stock_con = stock_def;
        stock_con = Stock("Tesla",12,123.5);
    }

    return 0;
}
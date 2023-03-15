#include <iostream>
#include <array>
#include <string>
const int SEASONS = 4;
const std::array<std::string,SEASONS> seasons = {"Spring","Summer","Automn","Winter"};

void fill(std::array<double,SEASONS> *p_prices);
void show(std::array<double,SEASONS> prices);

int main()
{
    std::array<double,SEASONS> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(std::array<double,SEASONS> *p_prices)
{
    for(int i=0;i<SEASONS;i++){
        std::cout<<"enter the prices:\n";
        std::cin>>(*p_prices)[i];
    }
}
void show(std::array<double,SEASONS> prices)
{   
    int total = 0;
    for(int i=0;i<SEASONS;i++){
        total += prices[i];
    }
    std::cout<<total<<std::endl;
}

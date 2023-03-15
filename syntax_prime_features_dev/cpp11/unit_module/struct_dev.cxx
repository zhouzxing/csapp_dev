#include <iostream>
using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable inflat_val{"xz",10,120.5};

    inflatable choice;

    cout << inflat_val.name 
        << &(inflat_val.name)
        << inflat_val.volume
        << inflat_val.price << endl;

    choice = inflat_val;
    
    cout << choice.name 
        << &(choice.name)
        << choice.volume
        << choice.price << endl;

    return 0;
}
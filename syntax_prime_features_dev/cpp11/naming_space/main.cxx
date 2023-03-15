#include <iostream>
#include "coodin.h"
using namespace std;

int main()
{

    struct where{double x;double y;};
    where a = {1,2};
    where *b = new where{3,4};
    // where *c = new where(3,4);

    int *d = new int(6);
    int *e = new int{7};
    // int *f = new(sizeof(int));


    int *p_arr = new int[20];


    return 0;
}

void show()
{
    rect reactor;polar polar;
    cout << "enter x and y values:";

    while (cin >> reactor.x >> reactor.y)
    {
        polar = rect_to_polar(reactor);
        show_polar(polar);
        cout << "next (q to quit!)"<<endl;
    }
    
    cout << "Bye!\n";

}


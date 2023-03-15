#include <iostream>
#include <ctime>

int main()
{

    using namespace std;

    cout << "Enter the secodes:\n";
    float sec;
    cin >> sec ;

    clock_t delay = sec * CLOCKS_PER_SEC;

    clock_t start = clock();
    while(clock() - start < delay)
    {
        cout << "waiting secs..."<<endl;
    }
    cout << "DONE";
    return 0;
}
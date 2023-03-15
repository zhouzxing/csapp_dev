#include <iostream>
using namespace std;

double warming = .3;

// 声明，非头文件
void update(double);
void local();

int main()
{
    cout << "global file value:"<< warming << endl;
    
    update(12.0);

    cout << "global file value:"<< warming << endl; 

    local();

    
    return 0;
}
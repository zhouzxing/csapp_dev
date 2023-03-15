#include <iostream>
#include <fstream>

int main()
{

    using namespace std;

    char automobile[50];
    int year;
    double a_price,d_price;

    ofstream outFile;
    outFile.open("dd.txt");

    cout<<"enter the info:\n";
    cin.getline(automobile,50);

    cout << "year:\n";
    cin >> year;
    cout << "asking prices:\n";
    cin >> a_price;
    d_price = 0.9 * a_price;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << automobile << ":"
        << year << ":"
        << a_price << ":"
        << d_price << endl;

    outFile << fixed;
    outFile.precision(5);
    outFile.setf(ios_base::showpoint);
    outFile << automobile << ":"
        << year << ":"
        << a_price << ":"
        << d_price << endl;
    outFile.close();        

    return 0;
}
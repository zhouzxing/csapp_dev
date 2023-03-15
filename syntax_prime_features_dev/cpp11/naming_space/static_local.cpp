#include <iostream>
using namespace std;

void count_str(const char *);

int main()
{
    cout << "enter the strings to count (empty line to quit!)"<< endl;

    char line[20];
    char *input = line;
    // cin.getline(input,20); ->自动抽取 \n
    cin.get(input,20); // -> 不抽取 \n

    while (cin) //input - cin
    {   
        char next;
        count_str(input);
        // cin.getline(input,20); //读源码的水平还不够！ -> java /cpp&c库
        cin.get(next);
        while ( next != '\n')
        {
            cin.get(next);
        }
        
        cin.get(input,20);
    }
    cout << "回车换行：" << (*input == '\n') << endl;

    return 0;
}


void count_str(const char * line)
{
    static int total;
    int count = 0;

    while (*line)
    {
        line++;
        count++;
    }
    total += count;

    cout << "total:" << total
        << "count:" << count << endl;
}
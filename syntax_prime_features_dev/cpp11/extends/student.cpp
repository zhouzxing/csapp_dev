// #include "student.h"
#include "student_private.h"

int main()
{
    // student s0("xing");

    // cout<<s0<<endl;

    // student s1;
    // cin >> s1;
    // cout << s1;

    student s2("macro",3);

    for (int i = 0; i < 3; i++)
    {
        s2[i] = i + 90;
    }
    cout << s2;

    cout << "average: "<< s2.average()<<endl;

    return 0;
}
#include<iostream>
#include <cstdlib>
#include <ctime>

#include "string.h"
/**
 * 实现业务功能 - 客户端实现
*/
using namespace std;

const int ArrSize = 10;
const int MaxLen = 81;

int main()
{
    {
    /** 语法单项测试
        {
            String st2 = "hello world";
            cout<<"innner block..."<<endl;
        }
        
        String::class_fun();

        String str1("hello world!");
        cout << str1[0] << endl;
        str1.class_fun();
        str1[0] = 'w';
        cout << str1 << endl;
        

        const String str2 = str1;
        str2[0] = 'w';
        cout << str2 << endl;
        String st0 = "hello world!";
        String st2("hi");
        cout << "bye..." << endl;
    */

        //应用场景-完备性测试
        //1.输入输出
        String name;
        cout << "Hi,what's your name?\n";
        cin >> name;

        cout << name << ",please enter up to " << ArrSize <<" sayings (Empty line to quit!)\n";
        String sayings[ArrSize];
        int index = 0;
        do
        {
            cin >> sayings[index];
            // cout << "output: " << sayings[index] << endl;
            if (sayings[index][0] == '\0') //空行
                break;
            index++;
        } while (index < ArrSize);
        
        //2.比较大小
        cout << "共输入：" << index << endl;
        if (index > 0)
        {
            //输出最短长度 || alphabetic-sorted first
            int shortest = 0, first = 0;
            //方法2：使用指针
            String *p_str_0 = &sayings[0];
            String *p_str_1 = &sayings[0];
            for (int i = 1; i < index; i++)
            {
                if (sayings[i].Length() < sayings[shortest].Length())
                    shortest = i;
                if (sayings[i] < sayings[first])
                    first = i;
                if (p_str_0->Length() > sayings[i].Length())
                    p_str_0 = &sayings[i];
                if (*p_str_1 > sayings[i])
                    p_str_1 = &sayings[i];
            }

            //输出
            cout << "the shortest: "<< sayings[shortest] << endl;
            cout << "the first: "<< sayings[first] << endl;
            cout << "the shortest: "<< *p_str_0 << endl;
            cout << "the first: "<< *p_str_1 << endl;

        }
    }
    cout<<"bye..."<<endl;
   
   /**
    //测试输入
    String name;
    cout << "enter name:\n";
    cin >> name;
    cout << name << endl;
    */
    return 0;
}
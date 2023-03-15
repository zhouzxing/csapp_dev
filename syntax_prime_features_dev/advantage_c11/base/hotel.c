#include "hotel.h"


void show(){
    printf("hi .h + linker func test!");
}

int menu()
{
    printf("hotel lists:\
        1.aa    2.bb\
        3.cc    4.dd\
    \n");

    int choice,status;
    printf("enter the bonus:___\b\b\b");
    //处理其他非常正常输入
    while ((status = scanf("%d",&choice)) != 1 || (choice>5 || choice<1))
    {
        if(status!=1){
             scanf("%*s");
            // while (getchar() != '\n')
            //     continue;
        }
        printf("enter the bonus between 1 and 5:___\b\b\b\n");
    }
    return choice;
}


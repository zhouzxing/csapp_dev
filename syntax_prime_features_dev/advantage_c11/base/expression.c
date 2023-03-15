#include <stdio.h>

int main()
{
    /**
     * 写算法的时候未生效？-估计是条件语句有问题
    */
    // for (size_t i = 0; i < 8; i++)
    // {
    //     if (i == 4)
    //     {
    //         continue;
    //     }
    //     if (i == 7)
    //     {
    //         break;
    //     }
    //     printf("i:%ld\n",i);
    // }
    
    /**
     * 测试数组
    */
    // int i_arr[8];
    // int* p_i = i_arr;
    // if(i_arr == &i_arr[0]){
    //     printf("&i_arr:%p,i_arr:%p,&i_arr[0]:%p\n",&i_arr,i_arr,&i_arr[0]);
    // }
    // //测试值
    // printf("i_arr[7]:%d\n",i_arr[7]);

    /**
     * 测试指针 & 数组
    */

    // int arr[3][3] = {{1,2,3},{5,6,7},{9,5,6}};    

    // int * p_i;
    // // p_i = &arr[0][0];
    // p_i = arr[0];
    // printf("arr[0][0]:%d\n",*p_i);
    // printf("arr[0][0]:%p\n",p_i);

    // int **p;
    // *p = arr[0];
    // // printf("arr[0][0]:%d\n",(*(*p)));
    // printf("&arr[0][0]:%p\n",(*p));


    //双重指针：不安全|未定义
    // int num = 8;
    // const int *p1 = &num;

    //int **p2 = &p1; //warinning - 无法通过编译
    // printf("num:%d",**p2);
    // **p2 += 1;

    //同理：
    // const int a = 1;
    // int* p2 = &a;

    // int arr[] = {3,4,5};
    // int i_arr[][2] = {{2,5},{8,9},{}};
    // // int** pp_arr = i_arr;
    // int* p = arr;
    // int (*p_arr)[2] = i_arr;
    // //指针支持[] ， * 操作
    
    // printf("%d\n",*(*(p_arr+1)+0)); //本质还是编译器解析问题

    // //pp_arr = &arr[0] = arr[0] = &arr[0][0]
    // printf("%p:%d\n",p_arr[1],p_arr[1][1]);
    // printf("%p:%d\n",p_arr+1,*(*(p_arr+1)+1));

    // int n;
    // scanf("%d",&n);

    // char test[100] = "hello world!";
    // puts(test);
    // char str[n];// = "hello world!";
    // // str = "hello world";
    // for (int i = 0; i < n-1; i++)
    // {
    //     str[i] = 'a';
    // }
    // // str[n-1] = '\0';
    // printf("%s\n",str);
    // puts(str);
    // str[1] = '\0';
    // puts(str);

    // char const *p = "hello world!";
    // // p[0] = 'H';
    // puts(p);

    // char* pname;
    // while (1)
    // {
    //     char str[10];
    //     // scanf("%s",pname);
    //     // printf("%s\n",pname);
    //     // gets(pname);
    //     // puts(pname);
    //     gets(str);
    //     puts("hello word");
    //     puts(str);
    //     printf("%ld",sizeof str);
    //     // printf("%d",sizeof *pname);
    // }
    
    

    return 0;
}
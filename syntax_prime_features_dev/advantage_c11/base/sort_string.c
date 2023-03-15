#include <stdio.h>
#include <string.h>

// 排序指针，而不是字符串常量来回复制
void sort(char* strings[],int n);
void s_gets(char* p_str,int n);//自定义输入字符串

#define SIZE 8
#define MAX_String 88

int main()
{
    printf("熟悉字符串数组处理技巧\n");

    char input[SIZE][MAX_String];
    for(int i=0;i<SIZE;i++){
        s_gets(input[i],MAX_String);
    }

    sort(input,SIZE);
    for(int i=0;i<SIZE;i++){
        puts(input[i]);
    }

    return 0;
}

void sort(char* strings[],int n)
{

}
/**
 * 输入逻辑设计：输入的时候无限循环保证最终结果肯定有否则不退出输入！ || 输入空行支持结束
*/
void s_gets(char* p_str,int n)//自定义输入字符串
{
    while(fgets(p_str,n,stdin) == NULL)
    //处理输入多余: fgets，会读入增加换行符
    

    return;
}
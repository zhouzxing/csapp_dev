#include <stdio.h>

void factor(int n);
/**
 * 不只是模拟栈的本质
*/
int main()
{
    int n;
    printf("Enter the num:");
    while (scanf("%d",&n) == 1)
    {
        factor(n);
        printf("\nEnter the num:");
    }
    printf("bye\n");
}

void factor(int n)
{
    if(n==1){
        printf("%d",1);
        return;
    }
    factor(n/2);
    printf("%d",n%2);
    return;
}

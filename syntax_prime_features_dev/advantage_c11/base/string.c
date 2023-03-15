#include <stdio.h>
#include <string.h>

int main()
{
    char name[10];
    float weight;

    printf("enter name:");    
    scanf("%s",name);

    printf("enter weight:");
    scanf("%f",&weight);

    printf("name:%s\n weight:%lf\n",name,weight);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
    if (argc != 2)
    {
        printf("Useage error %s\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    
    FILE* fp;
    int ch,count=0;
    if ((fp = fopen(argv[1],"r")) == NULL)
    {
        printf("Cannot open file:%s\n",argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((ch=getc(fp)) != EOF)
    {
        putchar(ch);
        count++;
    }
    fclose(fp);
    printf("nums:%d\n",count);

    return 0;
}
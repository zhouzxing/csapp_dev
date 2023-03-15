# include <stdio.h>

int main(){

    int mul_arr[3][4] = {{1,2,3,4},{6,7,8,9},{0,0,0,0}};

    printf("mul_arr address: %p\n",mul_arr);
    printf("mul_arr &address[0]: %p\n",&mul_arr[0]);
    printf("mul_arr address[0]: %p\n",mul_arr[0]);
    printf("mul_arr &address[0][0]: %p\n",&mul_arr[0][0]);

    int* p = mul_arr[0];
    printf("pointer p add: %p\n",p);
    printf("pointer p add: %p\n",&p);
    return 0;
}
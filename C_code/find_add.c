#include<stdio.h>
#include<stdlib.h>

int my_global_var = 99;

int add(int a ) {
    int b = a + my_global_var;
    return b;
}

int main(){
    int *ptr =(int *)malloc(sizeof(int) *3);

    ptr[0] = 0;
    ptr[1] = 1;
    ptr[2] = add(1);
    printf("ptr[0] = %d,ptr[1] = %d, ptr[2] = %d\n",ptr[0],ptr[1],ptr[2]);
    
 }

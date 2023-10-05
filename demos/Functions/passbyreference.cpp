#include<stdio.h>

void swapNumbers(int* a,int* b){
     int temp = *a;
     *a=*b;
     *b=temp;
}


int main(int argc, char const *argv[])
{
    int a=20,b=30;

    printf("Before : a=%d,b=%d\n",a,b);
     // logic
    swapNumbers(&a,&b);

    printf("After : a=%d,b=%d",a,b);
    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=20;
    char c= 'Z';
    int num[2][5] = {20,30,40};
    int * ptr;
    int ** ntr;
    ptr = &a;
    ntr = num;
    //ptr = a; // not allowed
    // ptr = &c; not allowed
    printf("%d\n",&a);
    printf("%d\n",num);
    printf("%d\n",ptr);
    printf("%d\n",ptr[1]); //*(ptr+1)


    return 0;
}

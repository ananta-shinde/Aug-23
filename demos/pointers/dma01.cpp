#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    // int ptr[10];
    int*  ptr;
    ptr = (int*)calloc(5,4);
    ptr = (int*)realloc(ptr,60);
    ptr[0] = 20;
    free(ptr);
    //printf("%d",sizeof(ptr)/sizeof(ptr[0]));
    printf("%d",ptr[0]);
    return 0;
}

#include<stdio.h>
#include"demo.h"
int main(int argc, char const *argv[])
{
    int a = 20;
    int b = 55;
    int arr[5]= {20,20,20};
    int result = add(a,b);
    printf("%d",result);
    printf("%d",add(arr));
    sub(a,b);
    add(20,20);
    
    return 0;
}

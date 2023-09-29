#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1=120,n2,n3=4,n4=500;
    // printf("%d",n1>n2 && n1>n3);
    // printf("%d",n2>n3 && n2>n1);
    // printf("%d",n3>n2 && n3>n1);
   if(n1>n2 && n1>n3 && n1>n4)
    printf("%d",n1);
   else if(n2>n3 && n2>n1 && n1>n4)
    printf("%d",n2);
   else if(n3>n1 && n3>n1 && n3>n4)
    printf("%d",n3);
    else
    printf("%d",n4);
    return 0;
}

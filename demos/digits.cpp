#include<stdio.h>
int main(int argc, char const *argv[])
{
    long long int num = 1451645454545 ;
    int count = 0;
     
    while(num > 0)
    {
        num = num/10;
        count++;
    }
    printf("%d",count);
    printf("\n%d",sizeof(num));

    return 0;
}

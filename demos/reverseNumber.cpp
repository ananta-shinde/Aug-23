#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 12345545;
    int r;
    while(num > 0)
    {
        r = num%10;
        num = num/10;
        printf("%d",r);
    }
    return 0;
}

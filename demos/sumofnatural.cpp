#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i = 1;
    int sum = 0;
    while(i<=10)
    {
        sum = sum+i;
        i++;   
    }
     printf("%d\n",sum);
    return 0;
}

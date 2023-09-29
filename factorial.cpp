#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n = 2;
    int multi = 1;
    for(int i=0;i<n;i++)
    {
        multi = multi*(n-i);
    }
    printf("%d",multi);
    return 0;
}

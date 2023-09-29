#include<stdio.h>
int main(int argc, char const *argv[])
{
     
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(j>=7/2-i && j<=7/2+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float temp[4][7];
     
    printf("Enter 7 values for a week :");
    for(int j=0;j<4;j++)
    {
        for(int i=0;i<7;i++)
        {
            scanf("%f",&temp[j][i]);
        }
    }
    
     printf("Tempratures are :");
     for(int j=0;j<4;j++)
    {
        for(int i=0;i<7;i++)
        {
            printf("%f",temp[j][i]);
        }
    }


    return 0;
}

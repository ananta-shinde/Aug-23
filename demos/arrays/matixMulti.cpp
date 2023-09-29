#include<stdio.h>
int main(int argc, char const *argv[])
{
   // int num[] = {20,30,40};
    int A[2][2] = {{1,2},{3,4}};
    int B[2][2] = {{1,3},{2,4}};
    int C[2][2];

    // logic for multipication
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            int sum =0;
            for(int k=0;k<2;k++)
            {
                sum = sum+(A[i][k]*B[k][j]);
                
            }
            C[i][j] = sum;
        }
    }

    //printing 2D array
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
             printf("%d",C[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}

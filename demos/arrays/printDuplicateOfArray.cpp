#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5];
    
    for(int i=0;i<5;i++)
    {
        scanf("%d",&numbers[i]);
    }

    // finding duplicates
    for(int j=0;j<5;j++)
    {
        int flag = 1;
        for(int i=j+1;i<5;i++)
        {
            if(numbers[j] == numbers[i]){
                  flag = 0;
            }
        }
        if(flag == 1)
        {
            printf("%d",numbers[j]);
        }
    }
    return 0;
}

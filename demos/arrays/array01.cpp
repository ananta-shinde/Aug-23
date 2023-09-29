#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    //int numbers[2] = {30};// partial 
    int numbers[5];// declaration
    
    // update an array
    printf("Enter five numbers:");
    for(int i=0;i<5;i++)
    {
      scanf("%d",&numbers[i]);
    }
    int largest = numbers[0];
    int sum = 0;
    //numbers[2] = 75;
    //reading array
    for(int i=0;i<5;i++)
    {
          if(numbers[i] >= largest)
          {
            largest = numbers[i];
          }
          sum  = sum+numbers[i];
    }
    printf("largest%d\n",largest);
    printf("sum :%d\n",sum);
    printf("Avg :%d\n",sum/5);
    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    // declaration
    int numbers[5];
    int sum = 0;
    // accepting inputs
    for(int i=0;i<5;i++)
    {
         scanf("%d",&numbers[i]);
    }
   
   // sum of all elements of array
   for(int i=0;i<5;i++)
   {
        sum  =sum +numbers[i];
   }

   printf("sum of numners : %d\n",sum);
   printf("avg of numners : %d\n",sum/5); 
   
    return 0;
}

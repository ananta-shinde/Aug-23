#include<stdio.h>
void sortArray(int* arr){
 for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

}

void printArray(int arr[])
{
     for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}
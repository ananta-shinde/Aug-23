#include<stdio.h>
int add(int a,char b){
     
  return a+b;
    
}
int add(int arr[]){
     int sum = 0;
     for(int i=0;i<5;i++)
     {
        sum = sum+arr[i];
     }

  return sum;
    
}
void sub(int a,int b){
      printf("%d",b-a);
    
}
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number");
    scanf("%d",&num);

   if(num == 1){
        printf("One");
   }
   else if(num == 2){
        printf("Two");
   }
   else if(num == 3)
   {
    printf("Three");
   }
   else if(num == 4){
     printf("Four");
   }
   else if(num == 5){
         printf("Five");
   }else{
    printf("Invalid input, enter number between 1 to 5");
   }
    
    
    
   
   
    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1, n2,n3;
    printf("Enter three numbers");
    scanf("%d%d%d",&n1,&n2,&n3);
   if(n1>n2 && n1>n3)
   {
        printf("largest is :%d",n1);
   }
   else if(n2>n1 && n2>n3){
         printf("largest is :%d",n2);     
   }
   else {
         printf("largest is :%d",n3);
   }
    
   
    return 0;
}

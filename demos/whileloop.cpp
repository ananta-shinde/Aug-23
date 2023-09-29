#include<stdio.h>
int main(int argc, char const *argv[])
{  
    int i = 1;
    while(i<=50)
    {
        if(i<=20 || i>=40)
        {
            printf("%d",i);
        }
        
        i++;
    }
   
     
    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n = 10;
    int flag = 0;
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag==0){
        printf("%d is prime numner",n);
    }
    else{
         printf("%d is not prime numner",n);
    }
    return 0;
}

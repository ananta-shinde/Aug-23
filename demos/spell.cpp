#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);

    switch (num)
    {
    case 1: printf("One");
        break;
    case 2: printf("Two");
        break;
    case 3: printf("Three");
        break;
    
    default:printf("Enter signle digit no only");
        break;
    }
    return 0;
}

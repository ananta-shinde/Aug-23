#include<stdio.h>
int main(int argc, char const *argv[])
{
    const int num = 10; // declaration
    short int age; // Initialization
    float pert;
    // printf("Enter your age :");
    // scanf("%d",&age);
    // printf("%d\n",num);
    // printf("%d",age);
    pert = 20.5;
    age = 20.99999;
    
    printf("%d\n",age);
    printf("%d\n",pert);
    printf("%f\n",pert);
    printf("%d",sizeof(age));



    return 0;
}

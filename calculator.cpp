#include<stdio.h>
int main(int argc, char const *argv[])
{
    int op1, op2,choice;

    printf("enter operand 1 : ");
    scanf("%d",&op1);
    printf("\nenter operand 2 : ");
    scanf("%d",&op2);

    printf("\nchoose oprator:");
    printf("1. addition 2.substraction 3.multiplication 4.division");
    scanf("%d",&choice);

    if(choice == 1)
    {
          printf("Addition is : %d", op1+op2);
    }
    if(choice == 2)
    {
          printf("substraction is : %d", op1-op2);
    }
    if(choice == 3)
    {
          printf("multiplication is : %d", op1*op2);
    }
    if(choice == 4)
    {
          printf("division is : %d", op1/op2);
    }
  
    
    
    

    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int op1,op2;
    char op;
    printf("\nEnter operator");
    scanf("%c",&op);
    printf("Enter first number");
    scanf("%d",&op1);
    printf("\nEnter second number");
    scanf("%d",&op2);
    switch (op)
    {
       case '+' : printf("Addition is : %d",op1+op2);
       break;
       case '-' : printf("Substraction is : %d",op1-op2);
       break;
       case '*' : printf("Multiplication is : %d",op1*op2);
       break;
       case '/' : printf("division is : %d",op1/op2);
       break;
       default: printf("Invalid operation");

    }
     
    return 0;
}

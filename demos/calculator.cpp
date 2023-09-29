#include<stdio.h>
int main(int argc, char const *argv[])
{
    // declaration
    int op1,op2;
    char op;

    // accepting input
    printf("Enter any operator from ( + , -, *, /) :");
    scanf("%c",&op);
    printf("\nEnter first number");
    scanf("%d",&op1);
    printf("\nEnter second number");
    scanf("%d",&op2);

    if(op == '+')
    printf("\nAddition : %d",op1+op2);
    else if(op == '-')
    printf("\nSub : %d",op1-op2);
    else if(op == '*')
    printf("\nMulti : %d",op1*op2);
    else if(op == '/')
    printf("\ndivision: %d",op1/op2);
    else{
        printf("\ninvalid operation");
    }


    return 0;
}

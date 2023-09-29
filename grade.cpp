#include<stdio.h>
int main(int argc, char const *argv[])
{
    // A+ : 80 to 100, A : 70 to 80, B : 60 to 70
    float marks;
     
    printf("Enter marks in percentage :");
    scanf("%f",&marks);
    if(marks >= 80){
        printf("\nYour grades are  : A+");
    }
    else if(marks >= 70  )
    {
        printf("\nYour grades are  : A");
    }
    else{
        printf("Your grades are  : B");
    }
    return 0;
}

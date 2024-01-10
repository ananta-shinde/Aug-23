#include<stdio.h>
#include<string.h>
struct Emplyoee
{
    int empid;
    char name[40]; 
    void  printDetails()
    {
        printf("empid :%d\t",empid);
        printf("name :%s",name);
    }  
};

int main(int argc, char const *argv[])
{
    Emplyoee emp,emp2;
    emp.empid  = 1000;
    strcpy(emp.name,"Ananta");

    emp2.empid = 2000;
    strcpy(emp2.name,"Shinde");

    emp.printDetails();
    printf("\n");
    emp2.printDetails();
    return 0;
}

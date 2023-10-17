#include<stdio.h>

class Employee
{
    int empId;
    char name[40];
    char dept[20];
    int salary;
    public:
    int getId()
    {
        return empId;
    }
};

 int main(int argc, char const *argv[])
 {
    Employee emp1;
    printf("%d",emp1.getId());
    return 0;
 }
 

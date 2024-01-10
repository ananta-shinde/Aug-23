#include<stdio.h>
#include<string.h>

// 1. encapsulation
// 2. absraction
// 3. inhertance
// 4. polymorphism

//terminalogy
//1. class (block to enscapsulate) : logical entity
//2. data members ( variables)
//3. member functions (methods)
//4. Object : physical entity

// struct Employee
// {
//     int empid;
//     char dept[10];
// };

class Employee
{
    private :
    int empid;
    public:

    Employee()
    {
        printf("\nDefault constructor is called");
        empid = 1000;
    }
    Employee(int id)
    {
        printf("\nParameterized constructor is called");
        empid = id;
    }
    char dept[10];
    int getEmpid()
    {
         return empid;
    }
    // void setEmpid(int id)
    // {
    //      this->empid = id;
    // }
};

int main(int argc, char const *argv[])
{
    Employee emp1,emp2(2000),emp3(3000);
    // emp1.dept = "CSE"
    strcpy(emp1.dept,"CSE");
    // emp1.setEmpid(1000);

    // print employee data
    printf("Empid : %d, dept : %s\n",emp1.getEmpid(),emp1.dept);
    printf("Empid : %d, dept : %s",emp2.getEmpid(),emp2.dept);
    return 0;
}


 


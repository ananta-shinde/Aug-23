#include<stdio.h>

class Employee
{
    int empid;
    char name[40];
    public:
    
    // default
    Employee()
    {
        printf("\n Default Contructor is called");
        this->empid = 100;
    }

    // parametrized constructor
    Employee(int n)
    {
        printf("\npara Contructor is called");
        this->empid = n;
    }

    int getId()
    {
       return this->empid;
    }
    void setId(int n)
    {
        this->empid = n;
    }
    
};


int main(int argc, char const *argv[])
{
    Employee e,e2(1000),e3;
    //e2.setId(200);
    printf("%d",e.getId());
    printf("%d",e2.getId());
    return 0;
}

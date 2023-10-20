#include<stdio.h>
class Employee
{
    int empid;
    char name[40];

    protected:
    void setId(int n)
    {
        this->empid = n;
    }
    
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
   
};

//  has a relation
class Company{
    Employee* emp;
};

// is a  relation
class Manager:Employee{
       int cabinNo;
       public:
       int getCabinNo()
       {
    
        return this->cabinNo;
       }
       void setCabinNo(int n)
       {
         this->cabinNo = n;
       }

       
};


int main(int argc, char const *argv[])
{
    Manager m1;
    Employee e;
    m1.setCabinNo(1000);
}

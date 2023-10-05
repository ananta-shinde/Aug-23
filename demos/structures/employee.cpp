#include<stdio.h>
struct Employee
{
    int empId;
    char name[40];
    char department[10];
    char designation[20];
    int salary;  
};

struct EmployeeList
{
    Employee list[5];
};


int main(int argc, char const *argv[])
{
    Employee emp1,emp2;
    Employee list[3];
    Employee list2[3];
    // emp1.empId = 1000;
    // emp2.empId = 2000;
  
    //  accepting details for all employee
   for(int i=0;i<3;i++){
        printf("--------------------------------\n");
        printf("Enter employee details\n");
        printf("EmpId :");
        scanf("%d",&list[i].empId);
        printf("Name :");
        scanf("%s",&list[i].name);
        printf("Dept :");
        scanf("%s",&list[i].department);
        printf("Designation :");
        scanf("%s",&list[i].designation);
        printf("Salary :");
        scanf("%d",&list[i].salary);
   }
  

    // printing details of all employees
     printf("--------------------------------\n");
        printf("Employee details are\n");
        printf("--------------------------------\n");
        printf("Id\t\tname\t\tDept\t\tdesignation\t\tsalary\n");
        printf("--------------------------------\n");
    for(int i=0;i<3;i++){
       
        printf("%d\t\t",list[i].empId);
        printf("%s\t\t",list[i].name);
        printf("%s\t\t",list[i].department);
        printf("%s\t\t",list[i].designation);
        printf("%d\t\t",list[i].salary);
        printf("\n");
    }

    // search employee by empid
    int choice;
    printf("\nEnter empid of employee : ");
    scanf("%d",&choice);
    printf("--------------------------------\n");
        printf("Employee details are\n");
        printf("--------------------------------\n");
        printf("Id\t\tname\t\tDept\t\tdesignation\t\tsalary\n");
        printf("--------------------------------\n");
    for(int i=0;i<3;i++)
    {
        if(choice == list[i].empId)
        {
            printf("%d\t\t",list[i].empId);
            printf("%s\t\t",list[i].name);
            printf("%s\t\t",list[i].department);
            printf("%s\t\t",list[i].designation);
            printf("%d\t\t",list[i].salary);
            printf("\n");
            break;

        }
        
    }

    return 0;
}

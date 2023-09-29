#include<stdio.h>
struct Employee
{
    int empId;
    char name[40];
    char department[10];
    char designation[20];
    int salary;
};


int main(int argc, char const *argv[])
{
    Employee emp1,emp2;
    Employee list[5];
    // emp1.empId = 1000;
    // emp2.empId = 2000;
  
    //  accepting details for emp 1
   for(int i=0;i<5;i++){
        printf("--------------------------------\n");
        printf("Enter employee details\n");
        printf("EmpId :");
        scanf("%d",&list[i].empId);
        printf("Name :");
        scanf("%s",&list[i].name);
   }
  

    // printing details of employee for emp1
     printf("--------------------------------\n");
        printf("Employee details are\n");
        printf("--------------------------------\n");
        printf("Id\t\tname\t\tDept\n");
        printf("--------------------------------\n");
    for(int i=0;i<5;i++){
       
        printf("EmpId: %d\t\t",list[i].empId);
        printf("Name: %s\t\t",list[i].name);
        printf("\n");
    }


     
    
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Department;
struct Student;
 
struct College{
    int id;
    char name[20];
    Department** dept;
};

struct Department
{
    int id;
    char name[20];
    College* College;
};

struct Teacher
{
    int id;
    char name[20];
    Department* dept;
    Student* student;
};

struct Student
{
    int id;
    char name[20];
    Department* dept;
};


int main(int argc, char const *argv[])
{
    College mit;
    College mgm;

    Department d1;
    d1.id = 100;
    //d1.name = "CSE";
    strcpy(d1.name,"CSE");
    Department d2;
    strcpy(d2.name,"IT");
    // connecting dept with colleges
   
   // array of departments
   mit.dept = (struct Department**)calloc(1,sizeof(Department));

    mit.dept[0] = &d1;
    realloc(mit.dept,2*sizeof(Department));
    mit.dept[1] = &d2;
    
    // puts(d1.name);
     puts(mit.dept[0]->name);
     puts(mit.dept[1]->name);

    return 0;
}




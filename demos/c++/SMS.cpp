#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
class Department;

class College
{
    int id;
    char name[20];
    Department* dept;
    public:

    int getId(){
          return this->id;
    } 
    void setId(int n){
         this->id = n;
    } 
    char* getName(){
           this->name;
    } 
    void setName(char n[]){
        strcpy( this->name, n);
    } 

    void assignDept(Department* ptr)
    {
        this->dept = ptr;
    }

    Department* getDeparment()
    {
        return this->dept;
    }
    

};
class Department
{
    int id;
    char name[20];
    College* college;
    public:
    int getId(){
          return this->id;
    } 
    void setId(int n){
         this->id = n;
    } 

     char* getName(){
         return  this->name;
    } 
    void setName(char n[]){
        strcpy( this->name, n);
    } 
     
};
class Teacher
{
    int id;
    char name[20];
    Department* dept;
    public:
     int getId(){
          return this->id;
    } 
    void setId(int n){
         this->id = n;
    } 
     char* getName(){
         return  this->name;
    } 
    void setName(char n[]){
        strcpy( this->name, n);
    } 

     void assignDept(Department* ptr)
    {
        this->dept = ptr;
    }

    Department* getDepartment()
    {
        return this->dept;
    }


};
class Student
{
    int id;
    char name[20];
    public:
     int getId(){
          return this->id;
    } 
    void setId(int n){
         this->id = n;
    } 
     char* getName(){
         return  this->name;
    } 
    void setName(char n[]){
        strcpy( this->name, n);
    } 
};

int main(int argc, char const *argv[])
{
    College geca;
    geca.setId(1000);
    geca.setName("GECA");
    

    Department d1;
    d1.setId(100);
    d1.setName("CSE");

    geca.assignDept(&d1);

    // create a teacher
    Teacher t1;
    t1.setId(400);
    t1.setName("Dennis");
  
     // assign dept to techer
     t1.assignDept(&d1);

     t1.getDepartment()->setName("MECH");
    puts(d1.getName());
    puts(geca.getDeparment()->getName());
    puts(t1.getDepartment()->getName()); 
    return 0;
}






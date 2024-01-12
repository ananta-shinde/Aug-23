#include<stdio.h>
#include<string.h>
class Person{
    protected:
    char name[20];
    int uid;
    char bloodgroup[3];
    public:
    void setName(char * name)
    {
        strcpy(this->name,name);
    }
    void demo()
    {
         printf("\nThis is base class method");
    }
    void demo(int a)
    {
         printf("\nThis is overloaded base class method");
    }
};

class Teacher:public Person {
    public:
    int id;
    void demo()
    {
         printf("\nThis is teacher class method");
    }
    
};

class Student :public Person{
     public:
     int rollNo;
    
};

int main(int argc, char const *argv[])
{
    Person* person = new Person();
    //  Teacher* teacher = new Teacher();
    //  Student* student = new Student();
    //  teacher->setName("Ananta");
    //  student->setName("Ananta");
    //  student->rollNo = 20;

    person->demo();
    person = new Teacher();
    person->demo(20);
    Teacher* teacher = new Teacher();
    teacher->demo();
      
     
    return 0;
}

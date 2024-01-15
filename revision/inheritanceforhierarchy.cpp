#include<stdio.h>

class User{
        int id;
};

class Teacher :public User{
    int id;
};
class Student:public User{
      public:
      int age;

      bool operator>(Student s)
      {
           if(this->age > s.age)
           {
             return true;
           }
           else{
             return false;
           }
      }

};
class Staff :public User{
    int id;

};

int main(int argc, char const *argv[])
{
    Student s1;
    Student s2;
    // Student* s2 = new Student();
    // Student* s1 = new Student();
    Student student_list[5];
    Teacher* t1 =  new Teacher();
    Teacher teacher_list[5];
    User* u1 = new Student() ;
    User list[5];
    // list[0] = u1; 

    s1.age = 120;
    s2.age = 30;

    if(s1 > s2)
    {
        printf("s1 is older");
    }
    else{
         printf("s2 is older");
    }
    return 0;
}

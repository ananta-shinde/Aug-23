#include<stdio.h>

class Person{
   
    char name[20];
    int uid;
    char bloodgroup[3];
};

class Teacher: Person {
    public:
    int id;
};

class Student :Person{
     
};

int main(int argc, char const *argv[])
{
    Teacher t3;
    Teacher* t1 = new Teacher();
    t1->id = 200;
    Teacher* t2 = new Teacher();
    t2->id = 250;
    t3.id = 300;

    t1 = t2;

    printf("%d\n",t3.id);
    printf("%d\n",t1->id);
    printf("%d",t2->id);
    return 0;
}

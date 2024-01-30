#include<iostream>
using namespace std;
class College;
class Student{
    int uid = 100;
    College* collage;
    friend class College;
    friend void globalStudentData(Student& s);
};

class College{ 
   public:
   void showStudentData(Student& s)
   {
       cout << s.uid << endl;
   }
};

void globalStudentData(Student& s)
{
     cout << s.uid << endl;
}
 

int main(int argc, char const *argv[])
{
    College c;
    Student s;
    c.showStudentData(s);
    globalStudentData(s);
    return 0;
}

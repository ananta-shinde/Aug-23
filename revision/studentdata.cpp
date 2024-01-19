#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;
class College{
    public:
    int id;
    char name[20];
    StudentList slist;
};

class Address{
       int pincode;
};
class Student{
    public:
    int rollNo;
    char name[40];
    College* college;
    Address address;
    void printStudentData()
    {
        // printf("\n Roll no : %d,Name: %s",rollNo,name);
        cout << "Roll No" << rollNo << "Name :" << name << endl;
    }
};



class StudentList{
    int no_of_student = 0;
    Student student_list[5];

     void saveStudentList()
    {
        ofstream fout;
        fout.open("studentData.txt",ios::out);
        fout.write((char*)student_list,sizeof(student_list));
        fout.close();
    }
    public:

    StudentList()
    {
        ifstream fin;
        fin.open("studentData.txt",ios::in);
        fin.read((char*)&student_list,sizeof(student_list));
        fin.close();
    }
    void addNewStudent()
    {
        if(no_of_student != 5)
        {
            Student s;
        printf("enter student details :\n");
        printf("Roll No :\n");
        scanf("%d",&s.rollNo);
        printf("Enter Name :\n");
        scanf("%s",s.name);

        student_list[no_of_student] = s;
        no_of_student++;
        // saveStudentList();
        }
        else  
        {
            printf("List is full");
        }
    }

    void printList()
    {
         
        for(int i=0;i<no_of_student;i++)
        {
            student_list[i].printStudentData();
        }
    }

    void searchStudentByRollNo()
    {   
        int roll;
        printf("\nenter studnet roll No to search for:");
        scanf("%d",&roll);
        for(int i=0;i<no_of_student;i++)
        {
            if(student_list[i].rollNo == roll)
            {
                student_list[i].printStudentData();
                break;
            }
        }
    }

    void searchStudentByRollNo(int roll){
         for(int i=0;i<no_of_student;i++)
        {
            if(student_list[i].rollNo == roll)
            {
                student_list[i].printStudentData();
                break;
            }
        }
    }
};


int main(int argc, char const *argv[])
{
    StudentList slist;
    Student s1;
    Student s2;
    College* c1 = new College();
    c1->id = 400;
    //slist.addNewStudent();
    // slist.addNewStudent();
    slist.printList();
    s1.college = c1;
    s2.college = c1;
    return 0;
}

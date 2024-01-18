#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;

class Student{
    public:
    int rollNo;
    char name[40];

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
        saveStudentList();
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
    //slist.addNewStudent();
    // slist.addNewStudent();
    slist.printList();
     
    return 0;
}

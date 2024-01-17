#include<stdio.h>

class Student{
    public:
    int rollNo;
    char name[40];

    void printStudentData()
    {
        printf("\n Roll no : %d,Name: %s",rollNo,name);
    }
};

class StudentList{
    int no_of_student = 0;
    Student student_list[5];
    public:
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
    slist.addNewStudent();
    slist.addNewStudent();
    slist.searchStudentByRollNo(200);
    return 0;
}

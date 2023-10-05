#include<stdio.h>
struct Student
{
    int rollNo;

};

void sortStudentListByRollNo(Student arr[]){
    
 for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(arr[i].rollNo<arr[j].rollNo)
            {
                int temp = arr[i].rollNo;
                arr[i].rollNo = arr[j].rollNo;
                arr[j].rollNo = temp;
            }
        }
    }

}

void printStudentList(Student arr[])
{
     for(int i=0;i<3;i++)
    {
        printf("%d\n",arr[i].rollNo);
        printf("%d\n",arr[i].rollNo);
    }
}
int main(int argc, char const *argv[])
{
    Student list[3];
    list[0].rollNo = 1000;
    list[1].rollNo = 2500;
    list[2].rollNo = 1500;

    printStudentList(list);
    sortStudentListByRollNo(list);
    printf("\n--------------------------\n");
    printStudentList(list);


    return 0;
}




#include<stdio.h>
 struct Student
 {
      int rollNo;
      int contact;
      char name[40];
 };
 
 int main(int argc, char const *argv[])
 {
    //int rollNo;
    Student list[5];

    Student s,s1;// value type
    Student * ptr;// address type
    ptr = &s;
    s.rollNo = 1000;
    s1.rollNo = 2000;
    s.contact = 121122121;
   
    list[0] = s;
    list[1] = s1;
    printf("%d\n",ptr->rollNo);
    printf("%d\n",sizeof(ptr));
    printf("%d\n",s1.rollNo);
    printf("%d\n",list[0].rollNo);
    printf("%d\n",list[1].rollNo);



    return 0;
 }
 
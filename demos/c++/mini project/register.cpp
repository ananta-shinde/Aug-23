// 1. create new student object
// 2. accept student data
// 3. save student data

#include<iostream>
#include<fstream>
#include<string.h>
#include"student.h"
using namespace std;



int main(int argc, char const *argv[])
{
   // 1. create new student object
   Student s;
   char name[40];
   char email[20];
   char password[10];
   cout << "enter your details"<< endl;
   cout << "===========================" << endl;
   cout << "enter name :";
   cin >> name ;
   cout << "enter email :";
   cin >> email ;
   cout << "enter password :";
   cin >> password ;

   //puting data to student object
   s.setName(name);
   s.setEmail(email);
   s.setPassword(password);

// saving object to file
   ofstream fout;
   fout.open("student.txt",ios::app);
   fout.write((char*)&s,sizeof(s));
   fout.close();
    return 0;
}

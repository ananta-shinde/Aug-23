#include<string.h>
#include<iostream>
using namespace std;

class Student{
    private:
    int rollNo;
    char name[40];
    char email[20];
    char password[10];
    public:
    void setName(char n[])
    {
         strcpy(this->name,n);
    }
    char * getName()
    {
         return this->name;
    }
    void setEmail(char n[])
    {
         strcpy(this->email,n);
    }
    char * getEmail()
    {
         return this->email;
    }
    void setPassword(char n[])
    {
         strcpy(this->password,n);
    }
    char * getPassword()
    {
         return this->password;
    }
    void printStudent(){
        cout << "name :" << this->name <<endl;
        cout << "email :" << this->email << endl;
        cout << "password :" << this->password <<endl;
        cout << "-------------------------"<< endl;
    }
};
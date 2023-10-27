#include<iostream>
#include<fstream>
using namespace std;

class Student{
    public:
    int rollno;
    string email;
    string password;

   
};

class College{
    public:
      void signup(){
        Student s;
        cout << "Enter your details" << endl;
        cout << "Roll no :" ;
        cin >> s.rollno;
        cout << "Email :" ;
         cin >> s.email;
        cout << "Password :" ;
         cin >> s.password;

        ofstream fout;
        fout.open("student.txt");
        fout << s.rollno << " ";
        fout << s.email << " ";
        fout << s.password << endl;

        // fout.write((char*)&s,sizeof(s));
        fout.close();
    }  
};


int main(int argc, char const *argv[])
{
    
    College MIT;
    // MIT.signup();
    Student p;
    ifstream fin;
    fin.open("student.txt");
    fin >> p.rollno >> p.email >> p.password;
    cout << p.email; 
    return 0;
}

#include<iostream>
#include<fstream>
#include"student.h"
using namespace std;

int main(int argc, char const *argv[])
{
     Student s;
     ifstream fin;
     fin.open("student.txt");
    // fin.seekg(sizeof(s));
     fin.read((char*)&s,sizeof(s));
     cout << s.getEmail();
     fin.close();
    return 0;
}

 

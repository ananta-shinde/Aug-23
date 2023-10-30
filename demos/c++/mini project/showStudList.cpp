#include<iostream>
#include<fstream>
#include"student.h"
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("student.txt");
    while(!fin.eof()){
        Student s;
        fin.read((char*)&s,sizeof(s));
        s.printStudent();
        // fin.seekg(sizeof(s));
    }
    return 0;
}

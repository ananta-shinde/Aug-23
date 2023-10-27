#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    string message = "Welcome message to console";
    char sample[20] = "sample";
    cout << message<< endl;

// write to file
    ofstream fout;
    fout.open("data.text");
    fout << message << endl;
    fout << "Another message";
    fout.write(sample,20);
    fout << "next statement";
    fout.close();

//read from file
    ifstream fin;
    fin.open("data.text");
    while(fin)
    {
        getline(fin,message);
        cout << message << endl;
    }
    fin.close();


    fstream fio;
    fio.open("demo.txt",ios::app);
    fio << "welcome";
    fio >> message;
    cout << message;

    return 0;
}



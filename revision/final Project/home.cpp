#include<iostream>
using namespace std;

class Doctor{
    int id;
    char name[40];
    int charges = 300;
    char specialization[20];
};

class Hospital{
   Doctor doctor_list[5];
   public:
    Doctor* getDoctorsList()
    {

    }
    void bookAppintment()
    {
            
    }
};

int main(int argc, char const *argv[])
{
    int choice = -1;
    Hospital hospital;
    cout << "welcome to App" << endl;
    cout << "*********************"  << endl;
    while(choice == -1)
    {
        cout << "1. book appoinment , 2.View Appointments" << endl;
    cout << "enter your choice from above";
    cin >> choice;
        switch (choice)
        {
        case 1 : hospital.bookAppintment();
            break;
        case 2 : 
            break;
        
        default:
            choice = -1;
            cout << "invalid choice please enter valid number" << endl;
            break;
        }
    } 
    return 0;
}

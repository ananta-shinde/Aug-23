#include<iostream>
using namespace std;

class Doctor{
    int id;
    char name[40];
    int charges = 300;
    char specialization[20];
    friend class Hospital;
};

class Patient{
    int patientId;
    char name[40];
    int contact;
    char address[50];
    friend class Hospital;
};

class Appointment{
    int id;
    char date[10];
    int doctorId;
    int patientId;
    friend class Hospital;

};

class Hospital{
   int patient_count = 0;
   int appointmet_count = 0;
   int doctor_count = 0;
   Doctor doctor_list[5];
   Appointment appointment_list[10];
   Patient patient_list[10];
   public:

    void addDoctor()
    {
        Doctor doctor;
        doctor.id = doctor_count+1;
        cout << "enter name";
        cin >> doctor.name;
        cout << "\n specialisation:";
        cin >> doctor.specialization;
        
        doctor_list[doctor_count] = doctor;
        doctor_count++;
    }
    Doctor* getDoctorsList()
    {
         return doctor_list;
    }
    Appointment* getAppointmentList()
    {
         return appointment_list;
    }
    Doctor getDoctorById(int id)
    {
          for(int i=0;i<5;i++)
          {
             if( doctor_list[i].id == id)
             {
                return doctor_list[i];
             }
          }
    }
     
    void bookAppointment()
    {
        int choice = 1;
        Appointment appt;
        Patient patient;
        cout << "Welcome to appointment portal" << endl;
        cout << "******************************\n" ;
        cout << "Available doctors : \n" ;
        for(int i=0;i<5;i++)
        {
            cout << i+1 << "Name:" << doctor_list[i].name << "specialisation:" << doctor_list[i].specialization <<endl;
        }
        cout << "please choose doctor :";
        cin >> choice; 
        appt.id = appointmet_count+1;
        appt.doctorId = doctor_list[choice-1].id;

        cout <<"enter your details \n";
        patient.patientId = patient_count+1;
        cout << "Name";
        cin >> patient.name;

        patient_list[patient_count];
        patient_count++;

        appt.patientId = patient.patientId;

        appointment_list[appointmet_count];

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
        case 1 : hospital.bookAppointment();
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

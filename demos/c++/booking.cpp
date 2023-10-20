#include<stdio.h>
#include<string.h>
//vehicle
//customer
//cities
//Driver
class Vehicle;
class Customer;
class Driver;

class Driver{
    char name[20];
    int contact;
    char vehicleNo[10];
    Vehicle* vehicle;
    void pickup()
    {

    }

    void drop()
    {

    }

};

class Vehicle{
    char vehicleNo[10];
    char vehicletype[10];
    char brandName[15];
    Driver* driver;
    Customer* customer;

    public:
      void setVehicleNo(char n[])
    {
         strcpy(this->vehicleNo,n);
    }
    char* getVehicleNo()
    {
          return this->vehicleNo;
    }
      void setVehicleType(char n[])
    {
         strcpy(this->vehicletype,n);
    }
    char* getVehicleType()
    {
          return this->vehicletype;
    }
      void setBrand(char n[])
    {
         strcpy(this->brandName,n);
    }
    char* getBrand()
    {
          return this->brandName;
    }

};

class Agency{
    Customer* customer;
    Driver* driver;
    Vehicle * vehicle;
    public:
    
    void assignVehicle(Vehicle* v)
    {
        this->vehicle = v;
    }
    void getVehicle()
    {
        puts(this->vehicle->getVehicleNo());
        puts(this->vehicle->getBrand());
    }
    void assignCustomer(Customer* c)
    {
        this->customer = c;
    }
    Customer* getCustomer()
    {
        this->customer ;
    }
};


class Customer{
    char name[20];
    int contact;
    char vehicleNo[10];

    public:
    Agency* agency;
    void setName(char n[])
    {
         strcpy(this->name,n);
    }
    char* getName(char n[])
    {
          return this->name;
    }
    void setContact(int n)
    {
         this->contact = n;
    }
    int getContact()
    {
          return this->contact;
    }
    void booking()
    {

    }

    void login(Agency* a)
    {
        this->agency = a;
    }

    void cancelling()
    {

    }
};

int main(int argc, char const *argv[])
{
    Customer c1;
    c1.setName("Ananta");
    c1.setContact(5454554);

    Vehicle v1;
    v1.setBrand("BMW");
    v1.setVehicleType("Four-sitter");
    v1.setVehicleNo("MH20-C1245");

    Agency agency;
    c1.login(&agency);
    agency.assignVehicle(&v1);
    agency.assignCustomer(&c1);


    c1.agency->getVehicle();


    return 0;
}




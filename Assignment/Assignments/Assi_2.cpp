// Develop a program in C++ to create a database of student’s information system containing the following information: 
// Name,  Roll  number,  Class,  Division,  Date  of  Birth,  Blood group, contact address, Telephone number, Driving license no. and other.
//  Construct the database with suitable member functions.  Make  use  of  constructor,  default  constructor,  copy  constructor,  destructor,  static  member  functions,  friend  class, 
// this pointer, inline code and dyna mic memory allocation  operators-new and delete as well as exception handling.
#include<iostream>
#include<string>
using namespace std;
class Perosnal_info
{
    public:
        string name;
        int roll;
        string clas_s;
        string divi;
        long int bod;
        string blood;
        static long long int Telephone_number;
        string contact_address;
        string Driving_license;
    public:
        static void Phone_Number(Perosnal_info &P_i)
        {
            cout<<"\nEnter the Telephone_number:- ";
            cin>>P_i.Telephone_number;
        }
        Perosnal_info()
        {
            cout<<"\nEnter the Name:- ";
            cin>>this->name;
            cout<<"\nEnter the Roll:- ";
            cin>>this->roll;
            cout<<"\nEnter the Class:- ";
            cin>>this->clas_s;
            cout<<"\nEnter the Division:- ";
            cin>>this->divi;
            cout<<"\nEnter the BoD:- ";
            cin>>this->bod;
            cout<<"\nEnter the Blood Group:- ";
            cin>>this->blood;
            cout<<"\nEnter the contact_address:- ";
            cin>>this->contact_address;
            cout<<"\nEnter the Driving_license:- ";
            cin>>this->Driving_license;
        }
        Perosnal_info(Perosnal_info&P_i1)
        {
            cout<<"\nChange The Name:- "<<endl;
            cin>>P_i1.name;
            name=P_i1.name;
        }
        ~Perosnal_info()
        {
            cout<<"\nDelated Perosnal_info Class Object"<<endl;
        }
};
///////////////////////////////////////////////////
class Personal_details
{
public:
       inline void diaplay(Perosnal_info&P_i)
        {
            cout<<"\n ******* Display The Personal Information *******"<<endl;
            cout<<"\n Name:- "<<P_i.name;
            cout<<"\n Roll:- "<<P_i.roll;
            cout<<"\n Class:- "<<P_i.clas_s;
            cout<<"\n Divion:- "<<P_i.divi;
            cout<<"\n DOB:- :"<<P_i.bod;
            cout<<"\n Blood Group :- "<<P_i.blood;
        }
};
// //////////////////////////////////////////////
int main()
{
    try{

    Perosnal_info* P_i = new Perosnal_info();
    Perosnal_info Phone_Number(*P_i);
    Personal_details P_d;
    P_d.diaplay(*P_i);
    Perosnal_info* P_i1 = new Perosnal_info();
    P_d.diaplay(*P_i);
    delete( P_i);

    }
    catch(...)
    {
        cout<<"\nSomething is Wrong:";
    }
    return 0;
} 
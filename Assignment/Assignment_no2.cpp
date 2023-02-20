// Personnel information system using constructor, destructor, static member
// functions, friend class, this pointer, inline code and dynamic memory allocation.
////////////////////////////////////////////////////////////////
// Name, Date of Birth,
// Blood group, Height, Weight, Insurance Policy, number, Contact address,
// telephone number, driving license no. 
////////////////////////////////////////////
// member functions for initializing and destroying the data viz constructor, default
// constructor, copy, destructor, static member functions, friend class, this pointer,
// inline code and dynamic memory allocation operators-new and delete as well as
// exception handling

#include<iostream>
#include<string>    
using namespace std;
class Personal_info
{
public:
    string name;
    string dob;
    string blood_group;
    float height=0;
    float weight=0;
    static int pin;
    
public:
    friend class Insurance_polices;

static int pin_Num(Personal_info &P)
{
    int pin_num;
    cout<<"\nPin :- "<<P.pin<<endl;
}
Personal_info(string n,string d,string b,float h=0,float w=0)
{   
    this->name=n;
    this->dob=d;
    this->blood_group=b;
    this->height=h;
    this->weight=w;   
}
~Personal_info()
{
     cout<<"\n All data members of Personal_info class is Deleted ";
}

};
// int Personal_info::pin=425413;
////////////////////////////////////////////////////////////////////////////////////////
class Insurance_polices
{
public:
    /* data */
    long long int mobile_num=0;
    string contact_address;
    long int deriving_lience;   
    int insurance_polices;
public:
    
Insurance_polices(/* args */)
{
    cout<<"\nEnter the mobile no:- ";
    cin>>this->mobile_num;
    cout<<"\nEnter the contact_address:- ";
    cin>>this->contact_address;
    cout<<"\nEnter the deriving_lience no:- ";
    cin>>this->deriving_lience;
    cout<<"\nEnter the insurance_polices on:- ";
    cin>>this->insurance_polices;
}
inline void display_Insurance_polices(Personal_info &P,Insurance_polices &I)
{
    
    cout<<"\nName:- "<<P.name;
    cout<<"\nDOB:- "<<P.dob;
    cout<<"\nBlood Group:- "<<P.blood_group;
    cout<<"\nHeight:- "<<P.height;
    cout<<"\nWeight:- "<<P.weight;    
    cout<<"\nMoblie Num:- "<<I.mobile_num;
    cout<<"\nContact Address:- "<<I.contact_address;
    cout<<"\nDeriving Lience Num:- "<<I.contact_address;
    cout<<"\nInsurance_policest:- "<<I.insurance_polices;  
}
};
int main()
{ 
        Personal_info P  ("ABCDEFGHIJ","22/12/2022","O+",5.8,53.50);
    try
    {
        Personal_info::pin_Num();
        Insurance_polices I;
        I.display_Insurance_polices(P,I);
    }
    catch(...)
    {
        cout<<"\nSome Problm is Detected"<<endl;
    }
    return 0;
}
  
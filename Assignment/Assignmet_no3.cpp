// Creating a class which uses the concept of inheritance, displays data and data
// members and uses the concept of exception handling.
#include<iostream>
#include<string>
using namespace std;
class A
{
    public:
        string name;
        int roll_no;
};
class B:public A
{
    public:
        void accept()
        {
            cout<<"\nEnter the name:- ";
            cin>>name;
            cout<<"\nEnter the Roll No:- ";
            cin>>roll_no;
        }
        void display()
        {
            cout<<"\nName:- "<<name;
            cout<<"\nRoll no:- "<<roll_no;
        }
};
int main()
{
 
    B b;
    try
    {
    b.accept();
    b.display();
    }
    catch(...)
    {   
        cout<<"\nSome Problem Is Dectected";
    }
}
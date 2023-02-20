// Imagine a publishing company which does marketing for book 
// and  audio  cassette  versions.  Create  a  class  publication  that 
// stores the title (a string) and  price (type float) of  publications.

// From  this  class  derive  two  classes:  book  which  adds  a  page  
// count (type int) and tape which adds a playing time in minutes  
// (type float). 
// Write a program that instantiates the book and tape 
// class, allows user to enter data and displays the data members.  
// If  an  exception  is  caught,  replace  all  the  data  member  values  
// with zero values. 

#include<iostream>
#include<string>
using namespace std;
 class  publication
 {
    public:
        string title;
        float price;
    publication()
    {
        cout<<"\nEnter The Book Title:- ";
        cin>>this->title;
        cout<<"\nEnter The Book Price:- ";
        cin>>this->price;
    }
 };
 class book : publication
 {
    public:
        int count;
    book()
    {
        cout<<"\nEnter The Book  Page Count :- ";
        cin>>this->count;
    }
    void display()
    {
      cout<<"\n The Book Name:-"<<this->title;
      cout<<"\n The Book Price:-"<<this->price;
      cout<<"\n The Book  Page Count :- "<<count;  
    }
 };
 class tape : publication
 {
    public:
        float time;
    tape()
    {
        cout<<"\nEnter The Tap time :- ";
        cin>>this->time;
    }
    void display()
    {
        cout<<"\n The Book Name:-"<<this->title;
        cout<<"\n The Book Price:-"<<this->price;
        cout<<"\n The Tap Time:- "<<this->time;
    }
 };
 int main()
 {
    book b;
    tape t;
    t.display();
    b.display();
    return 0;
 }
 

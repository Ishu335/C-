// Write  C++  program  using  STL  for  sorting  and  searching  user  
// defined records such as personal records (Name, DOB, 
// Telephone number etc) using vector container.
#include<iostream>
#include<string>
#include <algorithm>
#include<vector>
using namespace std;
class Personal
{
    public:
        int rollno;
        string name;
        char dob[15]; 
};
vector<Personal>v1;
void insert();
void display();
void print();
void insert()
{
    Personal k;
    cout<<"\nEnter Roll No : ";
    cin>>k.rollno;
    cout<<"\nEnter Name : ";
    cin>>k.name;
    cout<<"\nEnter DOB  : ";
    cin>>k.dob;
    v1.push_back(k);
}
void display()
{
  for_each(v1.begin(),v1.end(),print);          
}
void print( Personal &i1)
{
     cout<<endl;
     cout<<" Personal Name "<< i1.name<<endl;
     cout<<" Personal roll number : "<< i1.rollno<<endl;
     cout<<"Personal DOB"<< i1.dob<<endl;

}
void delet()
{
   Personal k;
    cout<<"\nEnter Personal Roll No To Delete : ";
    cin>>k.rollno;
    vector<Personal>::iterator p;
    p=find(v1.begin(),v1.end(),k);
            if(p!=v1.end())
                v1.erase(p);
    else
                cout<<"\nNot found ";
}
bool compare(const Personal &k, const Personal &i2)
{
    return(k.rollno<i2.rollno);
}
void sort1( )
{
    sort(v1.begin(),v1.end(),compare);
}

int main()
{
    insert();
    display();
    return 0;

}
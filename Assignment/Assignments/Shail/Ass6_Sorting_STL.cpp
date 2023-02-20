#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student
{
 public:
                        int rollno;
                        string name;
                        char dob[15];
       
};
 
  vector <Student> s1;
  void print(Student &k);
  void display();
  void insert();
  void search();
void sort1();
void delet();

bool compare(const Student &k, const Student &i2)
            {
                        return(k.rollno<i2.rollno);
            }

int main()
  {
     int op;
    
       insert();
       display();
       search();
       sort1();
       display();
       delet();
return 0;
 }


void insert()
            { 
                        Student k;
	    cout<<"\nEnter Roll No : ";
                cin>>k.rollno;
                cout<<"\nEnter Name : ";
                cin>>k.name;
                cout<<"\nEnter DOB  : ";
                cin>>k.dob;
                            s1.push_back(k);
            }

void display()
            {
                    for_each(s1.begin(),s1.end(),print);
             }

void print( Student &i1)
{
     cout<<endl;
    cout<<" student Name "<< i1.name<<endl;
     cout<<" Student roll number : "<< i1.rollno<<endl;
     cout<<"Student DOB"<< i1.dob<<endl;

}

void search()
{
       vector<Student>::iterator p;
       Student k;                 
        cout<<"\nEnter Student Roll No To Search  : ";
                        cin>>k.rollno;
               // cout<<"\n\n\t\tROLL NO\t\tNAME\t\tDATE OF BIRTH";
                        
                        p=find(s1.begin(),s1.end(),k);
                        if(p!=s1.end())
                        {
                                   cout<<*p;
                        }
                        else
                                    cout<<"\nNot found ";
}

void delet()
            {
                        Student k;
                        cout<<"\nEnter Student Roll No To Delete : ";
                        cin>>k.rollno;
                        vector<Student>::iterator p;
                        p=find(s1.begin(),s1.end(),k);
                             if(p!=s1.end())
                                    s1.erase(p);
                        else
                                    cout<<"\nNot found ";
            }


             void sort1( )
            {
                        sort(s1.begin(),s1.end(),compare);

            }
        
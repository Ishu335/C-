// Write a C++ program that creates an output file, writes information to it, closes the
// file and open it again as an input file and read the information from the file.

#include<iostream>
#include<fstream>
using namespace std;
class File
{   
    public:
    void write();
    void read();
};
void write(File &F)
{   string person_name;
    cout<<"\nEnter the Person name:- ";
    cin>>person_name;
    ofstream f("Sample.text");
    f<<person_name;
    cout<<person_name;
    cout<<"\nHellow My Name is :- "<<person_name;
    f.close();
}
void read(File &F)
{
    ifstream f("Sample.text");
    string str;
    getline(f,str);
    cout<<str;
    f.close();
}
int main()
{
    File f;
    int value=true;
    while (value)
    {   
        int a;
        cout<<"\n 1 for Read and 2 for Write:- ";
        cin>>a;
        switch (a)
        {
        case 1:
                a=0;
                 write(f);
                
            break;
        case 2:
                a=0;
                read(f);
            break;
        case 3:
            a=0;
            value=false;
            break;    
        default:
             cout<<"\nYou Enter Wrong Choice: ";
            break;
        }

    }
    
    read(f);
    return 0;
}

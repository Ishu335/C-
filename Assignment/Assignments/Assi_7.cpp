// Write a program in C++ to use map associative container. The 
// keys  will  be  the  names  of  states  and  the  values  will  be  the 
// populations  of  the  states.  When  the  program  runs,  the  user  is 
// prompted to type the name  of a state. The program then looks 
// in  the  map,  using  the  state  name  as  an  index  and  returns  the 
// population of the state
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    typedef map<string,int>mapType;
    mapType populations;
    populations.insert(pair<string,int>("Goa",1223));
    populations.insert(pair<string,int>("Maharashtra",1224));
    populations.insert(pair<string,int>("Punjab",1225));
    populations.insert(pair<string,int>("West Bengal",1225));
    mapType::iterator p;
    cout<<"\nSize of Map:-"<<populations.size();
    string state;
    cout<<"\nEnter the State Name:- ";
    cin>>state;
    p=populations.find(state);
      if(p!=populations.end())
        {
            cout<<state<<"\nState Populations:- "<<p->second;
        }
        else
        {
            cout<<"\nState is not Found";
        }


    return 0;
}
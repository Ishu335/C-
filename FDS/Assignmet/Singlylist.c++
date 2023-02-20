#include<iostream>
#include<string>
using namespace std;
struct NODE
{
    public:
        string NAME;
        long long int PRN;
        NODE* next;
    NODE(string name,long long int prn):NAME(name),PRN(prn),next(nullptr){}
    NODE(string name,long long int prn, NODE* temp_node):NAME(name),PRN(prn),next(temp_node){}

};
class  LinkList
{

public:
    NODE* head;
    LinkList():head(nullptr){}
    void insert(string name,long long prn)                  // Insert function
    {   NODE* new_node= new NODE(name,prn,head);
        if (head==nullptr)
        {
            head =new_node;
        }
        
    }
    void display()                                         // Display function
    {
        NODE* temp=head;
        while ( temp!=nullptr)
        {
            cout<<"\nName:"<<temp->NAME<<" PRN No :- "<<temp->PRN<<endl;
        }
        
    }
    void count()                                            //Count Functions
    {
        NODE* temp=head;
        int i=0;
        while ( temp!=nullptr)
        {
            i=i+1;
        }
        cout<<"\n Compute total number of members of club :- "<<i<<endl;
    }
    


};

int main()
{
    return 0;
}


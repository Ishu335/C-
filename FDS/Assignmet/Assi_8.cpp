// Second  year  Computer  Engineering  class,  set  A  of  students  like  Vanilla  Ice-cream 
// and  set  B  of  students  like  butterscotch  ice-cream.  Write  C++  program  to  store  two 
// sets using linked list. compute and display- 
// a) Set of students who like both vanilla and butterscotch 
// b) Set of students who like either vanilla or butterscotch or not both 
// c) Number of students who like neither vanilla nor butterscotch 
#include<iostream>
#include<string>
using namespace std;
class Node
{
    public:
        string name;
        Node* next;
};
class LinkList
{
    public:
        Node* head;
    LinkList():head(nullptr){}
    void insert(string name)
    {
        Node* new_node= new Node();
        new_node->name=name;
        new_node->next=head;
        head=new_node;
    }
    void  disply()
    {
        Node* temp= new Node();
        temp=head;
        int i=0;
        while (temp!=nullptr)
        {
            cout<<"\nStudent Name:-"<<temp->name<<endl;
            temp=temp->next;
            i++;
        }
        cout<<"\nCount of Set Student :- "<<i<<endl;
        
    }
    void delete_link_list()
    {
        Node* temp=head;
        head=head->next;
        delete(temp);
    }
};
int main()
{
    LinkList* L = new LinkList();
    // char A[]={'A','B','C','D'};
    // char B[]={'A','B','E','F'};
    // char C[]={'A','B','G','H','I'};
    

    L->insert("A");
    L->insert("B");
    L->insert("C");
    L->insert("D");
    // cout<<"\nSet Set of students who like both vanilla and butterscotch  : \n";
    L->disply();
    L->delete_link_list();
    L->disply();
    // string b[]={"E","B","G","F"};
        return 0;
}

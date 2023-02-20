// a) Add and delete the members as well as president or even secretary. 
// b) Compute total number of members of club 
// c) Display members 
// d) Two linked lists exists for two divisions. Concatenate two lists. 

#include<iostream>
#include<string>
using namespace std;
class  Node
{
    public:
        string NAME;
        int PRN;
        Node* next;    
};
class  LinkList
{
    public:
        Node* head;
    LinkList():head(nullptr){}
    void insert(string name,int prn)
    {
        Node* new_node=new Node();
        new_node->NAME=name;
        new_node->PRN=prn;
        new_node->next=head;
        head=new_node;   
    }
    void display()
    {
        Node* temp = new Node();
        temp = head;
        cout << "Linked List: ";
        int i=0;
        while(temp!=nullptr)
        {
            cout <<"\nName:- "<<temp->NAME<< " PRN:-  "<<temp->PRN;
            temp = temp->next;
            i++;
        }
        cout << "\nThere are " <<i << " items in Linked List\n";
        cout << endl; 
    }
    void remove_node()
    {
        Node* temp = head;
        if (temp==nullptr)
        {
            cout << "Deletion from Empty Singly Linked Not Possible"; 
            return; 
        }
        else
        {
            head = head->next;
            delete(temp);
        }
    }
};

int main()
{
    LinkList* list = new LinkList();
   // -> used with pointer objects
   // Need '&' i.e. address as we need to change head
   list->insert("ABC",12345);
   list->insert("DEF",12346);
   list->insert("GHI",12349);
   list->insert("JKL",12348);
   list->insert("PQR",12347); 
   list->display();
   // No '&' as head is not changed 
   list->remove_node(); 
   list->remove_node();
   list->remove_node(); 
   list->display();

   return 0;
    return 0;
}


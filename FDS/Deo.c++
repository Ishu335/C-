// Department of Computer Engineering has student's club named 'Pinnacle Club'. Students 
// of  second,  third  and  final  year  of  department  can  be  granted  membership  on  request.
// Similarly one may cancel the membership of club. First node is reserved for president of 
// Club and last node is reserved for secretary of club. Write C++ program to maintain club 
// member’s  information  using  singly  linked  list.  Store  student  PRN  and  Name.  Write 
// functions to: 
// a) Add and delete the members as well as president or even secretary. 
// b) Compute total number of members of club 
// c) Display members 
// d) Two linked lists exists for two divisions. Concatenate two lists.  

#include<iostream>
#include<string>
using namespace std;
 struct NODE
{
  public:
    string NAME;
    long long int PRN;
    NODE *next;
    NODE(string name,long long int prn):NAME(name),PRN(prn),next(nullptr){} // Creating NODE
    NODE(string name,long long int prn, NODE *tempNext):NAME(name),PRN(prn),next(tempNext){} //Nest Node
};
class LinkedList
{
  public:
    NODE * head;
  LinkedList():head(nullptr){}
  void insert(string name,long long int prn)
  {
    NODE* new_node= new NODE(name,prn);
    if (head==nullptr)
    {
      head = new_node;
    }
    else
    {
      new_node->next = head;
      head = new_node;
    }
  }

    void remove(string name)
    {
      NODE* temp = head;
          // If the head is to be deleted
          if (temp != nullptr && temp->NAME == name)
          {
            head = temp->next;
            delete temp;
            return;
          }
          // Else loop over the list and search for the node to delete
          else
          {
            NODE* curr = head;
            while(temp != nullptr && temp->NAME != name)
            {
            // When node is found, delete the node and modify the pointers
            curr = temp;
            temp = temp->next;  
            }
            // If values is not found in the linked list
            if(!temp)
            {
              cout << "Value not found" << endl;
              return;
            }
            curr->next = temp->next;
            delete temp;
          }  
    }
    void display()
      {
        NODE* temp = head;
        while(temp != nullptr)
        {
          cout << temp->NAME << " "<<temp->PRN<<endl;
          temp = temp->next;
        }
        cout << endl;
      }
    void count_menmber()
    {
      NODE*temp=head;
      int i=0;
      while (temp!=nullptr)
      {
        i=i+1;
      }
      cout<<"\nCompute total number of members of Club:- "<<i;
    }
};
//Class

int main()
{
  LinkedList l;
  l.insert("Ishwar",1000001);
  l.insert("Sahil",2000002);
  l.insert("Sheryash",3000003);
  l.insert("Chetan",4000004);
  l.count_menmber();
  l.display();
  l.remove("Sahil");
  l.display();
  l.count_menmber();
  cout<<"\n\n******* Done *******";
  return 0;
}



















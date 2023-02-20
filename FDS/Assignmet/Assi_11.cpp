#include <iostream>
#define MAX 10
using namespace std;
struct queue
{       
    int data[MAX];
	int front,rear;
};
class Queue
{    struct queue q;
   public:
      Queue(){q.front=q.rear=-1;}
    void enqueue(int x)
    {
        q.data[++q.rear]=x;
        cout<<"\nJob is Added"<<endl;
    }
    void delqueue()
    {
        q.data[++q.front];
        cout<<"\nJob is Removed"<<endl;
    }
    void display()
    {   
        int i;
        cout<<"\n";
        for(i=q.front+1;i<=q.rear;i++)
            cout<<q.data[i]<<" ";
    }
};
int main()
{   
    Queue obj;
	int ch,x;
    cout<<"\n Enter data : \n";
    cin>>x;
    obj.enqueue(x);
    obj.display();
    obj.delqueue();
    obj.display();
    return 0;
}
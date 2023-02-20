// Write  a  function  template  for  selection  sort  that  inputs,  sorts 
// and outputs an integer array and a float array.
#include<iostream>
using namespace std;
int n;
#define size 10
template<class T=int>
void sel(T A[7] )
{
    int i,j,min;
    // int n=sizeof(A)/size(T);
    int n=7;
    T temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
     cout<<"\nSorted array: ";
    for(i=0;i<n;i++)
    {
        cout<<" "<<A[i];
    }
}
int main()
{
    int i;
    int A[7]={1,5,7,9,3,5,24};
    int count=sizeof(A)/sizeof(int);
    for (i=0;i<count;i++)
    {
        cout<<A[i]<<endl;   
    }
   sel(A);
    float B[]={2.56,78.9,5.1,34.2};
    sel(B);
    // return 0;
}
// Arithmetic operations on complex numbers using operator overloading.
#include<iostream>
using namespace std;
class Complex
{
    public:
       
        int real,imag;
    public:
    friend istream&operator>>(istream&is,Complex &C);
    friend ostream&operator<<(ostream&os,Complex &C);
    Complex()
    {
       real=0;
       imag=0;
    }
     
    Complex  operator+(Complex &C)
    {  Complex sum;
       
      sum.real= real+C.real;
      sum.imag=imag+C.imag;
       return  sum;
    }
    Complex operator-(Complex &C)
    {    Complex sub;
       sub.real=real-C.real;
       sub.imag=imag-C.imag;
       return sub;
    }
};
    istream&operator>>(istream&is,Complex &C)
    {
        cout <<"\nEnter The Real 1 Numbers:- ";
        is>>C.real;
        cout <<"\nEnter The Imag 1  Numbers:- ";
        is>>C.imag;
    }
    ostream&operator<<(ostream&os,Complex &C)
    {
        os<<"( "<<C.real<<" + "<<C.imag<<"i)";
    }

int main()
{
    Complex c1;
    cin>>c1;
    Complex c2;
    cin>>c2;
   Complex c3=c1+c2;
//    cin>>c3;
   cout<<c3;
   Complex c4=c1-c2;
   cout<<c4;
    
    return 0;
}



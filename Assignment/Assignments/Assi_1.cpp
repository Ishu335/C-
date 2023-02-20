// Implement  a  class  Complex  which  represents  the  Complex  Number  data  type.  Implement  the  following  
// 1.  Constructor (including  a  default  constructor  which  creates  the  complex  
// number  0+0i).  
// 2.  Overload  operator+  to  add  two  complex 
// numbers. 
// 3. Overload operator* to multiply two complex 
// numbers. 
//  4.  Overload  operators  <<  and  >>  to  print  and  read 
// Complex Numbers.

#include<iostream>
using namespace std;
class Complex
{
public:
    int real;
    int imag;
public:
    friend istream&operator>>(istream&io,Complex&C);
    friend ostream&operator<<(ostream&os,Complex&C);
   Complex()
    {
        this->real=0;
        this->imag=0;
    }
    Complex operator +(Complex &C)
    {
        Complex sum;
        sum.real=real+this->real;
        sum.imag=imag+this->imag;
        return sum;
    }
    Complex operator *(Complex &C)
    {
        Complex mul;
        mul.real=real*this->real;
        mul.imag=imag*this->imag;   
        return mul;
    }
    
};
istream&operator>>(istream&io,Complex&C)
{
    cout<<"\nEnter the Real Number:- ";
    io>>C.real;
    cout<<"\nEnter the Img Number:- ";
    io>>C.imag;
}
ostream&operator<<(ostream&os,Complex&C)
{
    os<<"\n( "<<C.real<<" + "<<C.imag<<"i )";  
}
int main()
{
    Complex c1;
    cin>>c1;
    Complex c2;
    cin>>c2;
   Complex c3=c1+c2;
   cout<<c3;
   Complex c4=c1*c2;
   cout<<c4;
}
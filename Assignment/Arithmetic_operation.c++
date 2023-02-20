#include<iostream>
using namespace std;
class Complex
{   
    public :
        int real;
        int imag;

    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(int r, int i)
    {
        real=r;
        imag=i;
        
    }
    Complex operator+(Complex C2)
    {   Complex C3;
        C3.real =real+C2.real;
        C3.imag =imag+C2.imag;
        cout<<"("<<C3.real<<"+"<<C3.imag<<"i)";
        
    }
    Complex operator*(Complex C2)
    {   Complex C3;
        C3.imag =imag*C2.imag;
        C3.real =real*C2.real;
        cout<<"("<<C3.real<<"*"<<C3.imag<<"i)";
        
    }
};
int main()
{
    Complex C1(4,5);
    Complex C2(3,6);
    Complex C3=C1+C2;
    C3=C1*C2;
   return 0;
}

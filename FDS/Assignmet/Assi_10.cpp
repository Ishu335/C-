#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int operator_scan(char op){
    if (op=='+'||op=='-')
    {
        return 1;
    }
    else if(op=='*'||op=='/')
    {
        return 2;
    }
    else{
        return -1;
    }
}
void infixtopostfix(string exp)
{
    stack<char>st;
    string result;
    for(int i=0;i<exp.length();i++)
    {
        char c=exp[i];
        if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
        {
            result=result+c;
        }
        else if (c=='(')
        {
            st.push('(');
        }
        else if(c==')')
        {
            while (st.top()!='(')
            {
                result=result+st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty()&&operator_scan(exp[i])<=operator_scan(st.top()))
            {
               result=result+st.top() ;
               st.pop();
            }
            st.push(c);
        }
    }
        while(!st.empty())
        {
            result=result+st.top();
            st.pop();
        }
        cout<<"\nFinal :- "<<result;
}
int main()
{
    string exp ="a+(b*d)-e+f+(g*h)-i";
	infixtopostfix(exp);
}
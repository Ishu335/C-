// Implement C++ program for expression conversion as infix to postfix and its 
// evaluation using stack based on given conditions: 
// 1. Operands and operator, both must be single character. 
// 2. Input Postfix expression must be in a desired format. 
// 3. Only '+', '-', '*' and '/ ' operators are expected
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int prec(char c)
{
	if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}
void infixtopostfix(string exp)
{	
	stack<char>st;
	string result;
	for(int i=0;i<exp.length();i++)
	{
		char c=exp[i];
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>=0&&c<=9))
		{
			result=result+c;
		}
		else if(c=='(')
		{
			st.push('(');
		}
		else if(c==')')
		{
			while(st.top()!='(')
			{
				result=result+st.top();
				st.pop(	);
			}
			st.pop();
		}
		else{
			while (!st.empty()
				&& prec(exp[i]) <= prec(st.top())) {
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
		
	}
	// Pop all the remaining elements from the stack
	while (!st.empty())
	 {
		result += st.top();
		st.pop();
	}
	cout<<result<<endl;
}
int main()
{
	string exp ="(a+b*d-f+g*h-i)";
	infixtopostfix(exp);

	return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(112);
    st.push(34);
    st.push(32);
    st.push(33);
    st.push(14);
    st.pop();
    int n = st.size();
    for(int i=0; i<n;i++)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"\n";
    return 0;
}

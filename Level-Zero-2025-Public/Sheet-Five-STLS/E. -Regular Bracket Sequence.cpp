#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int v=0;
    stack<char>st;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            st.push('(');
        } else 
         {
           if(!st.empty())
            {
               v++;
                st.pop();
            }   
         }
    }
    cout<<v*2;
}
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    stack <char>s;
    string ss;
    
    cin>>ss;
    for(int i=0;i<ss.size();i++)
    {
        if(ss[i]=='(')
        s.push('(');
        else 
        {
            if(!s.empty())
            s.pop();
            else
            {
            cout<<"No";
            return 0;
            }
        }
    }
    if(s.empty())
    cout<<"Yes";
    else
    cout<<"No";
}
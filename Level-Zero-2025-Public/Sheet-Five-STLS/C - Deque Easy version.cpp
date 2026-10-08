#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q,x,i=0;
    string s;
    deque<int> b;
    cin >> q;
   while (q--)
   {
    cin>>s;
    if(s=="push_back")
    {
        cin>>x;
        b.push_back(x);
    }else if(s=="push_front")
    {
        cin>>x;
        b.push_front(x);    
    }
     else if(s=="pop_front")
        b.pop_front();    
    
    else if(s=="pop_back")
        b.pop_back();
    else if(s=="front")
         cout << b.front() <<'\n';
    else if(s=="back")
         cout << b.back() <<'\n';
    else if(s=="print")
    {
        cin>>x;
        cout << b[x-1] <<'\n';
    }         
   }
}
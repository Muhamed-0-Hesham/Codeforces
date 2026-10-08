#include <bits/stdc++.h>
using namespace std;
int main() 
{
    queue<int>q;
    int num,id,t;
   cin>>t;
   while(t--)
   {
      cin>>id>>num;
      if(id==1)
        q.push(num);
      else if(id==2 && q.empty())
      cout<<"no\n";
      else if(id==2 && !q.empty())
      {
        if(num==q.front())
        cout<<"yes\n";
        else
        cout << "no\n";
        q.pop();
      }
   }
}
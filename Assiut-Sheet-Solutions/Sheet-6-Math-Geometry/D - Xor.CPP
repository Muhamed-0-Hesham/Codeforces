#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
   long long x,y,q;
   cin>>x>>y>>q;
      if( q%3 ==1 )
      {
        cout<<x;
      }
      else if( q%3 ==2 )
      {
        cout<<y;
      }
      else
       cout<<(x^y);
}
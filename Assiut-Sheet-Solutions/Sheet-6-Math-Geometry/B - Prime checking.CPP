#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
   long long x;
   bool t=true;
   cin>>x;
   for(long long i=2;i<=sqrt(x);i++)
   {
        if(x%i==0)
        t=false;
   }
   if(x==1)
   {
     cout<<"NO";
     return 0;
   }
  if(t)
  cout<<"YES";
else
  cout<<"NO";
}
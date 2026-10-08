#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
   long long x;
   cin>>x;
   while(x%2==0)
     x/=2;
   if(x==1)
   cout<<"YES";
   else
   cout<<"NO";

}
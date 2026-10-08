#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
   long long x,y,sum=0,even=0,odd=0,f,l;
   cin>>x>>y;
   if(x<y)
    swap(x,y);

    sum=(x+y)*(x-y+1)/2;
    if(x%2==0)
    l=x;
    else
    l=x-1;
    if(y%2==0)
    f=y;
    else
    f=y+1;
    even=  (f+l) * ( (l-f)/2+1 ) / 2 ;
 cout<<sum<<"\n"<<even<<"\n"<<sum-even;
}
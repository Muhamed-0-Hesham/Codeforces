#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
   long long x=1,y=2,sum=0,f;
   cin>>f;
   if(f==1)
   {
    cout<<1;
    return 0;
   }
 while(sum < f)
 {
  sum = (y+x) * (y-x+1) / 2;
    y+=1; 
 }
 if(sum > f)  
  cout<<y-2;
 if(sum==f)
   cout<<y-1;
}
#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long y,x;
while(cin>>x>>y)
{
if(y<=0 || x<=0)
  break;
long long j,i,sum=0;  
j=min(x,y);
i=max(x,y);
 
if(y>0 && x>0)
{
  for(j;j<=i;j++)
  {
    
    cout<<j<<" ";
    sum+=j;
  }
  cout<<"sum ="<<sum;
  if(y>0 && x>0)
  cout<<endl;
}
}
}
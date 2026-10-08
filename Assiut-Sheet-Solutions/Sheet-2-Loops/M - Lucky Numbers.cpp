#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long n,x,y,i,max=0,mo;
bool t=false;
cin>>n>>x;
for(n;n<=x;n++)
{
  if(n==4 ||n==7)
  {
    t=true;
  cout<<n<<" ";
  }else
  if(n>9)
  mo=n;
  while(mo>0)
  {
    switch(mo%10)
    {
  case 4:
    mo-=4;
    mo/=10;
    if(mo==0)
    {
      t=true;
    cout<<n<<" ";
    }
    break;
    
  case 7:
    mo-=7;
    mo/=10;
    if(mo==0)
    {
      t=true;
    cout<<n<<" ";
    }
    break;
    
  default:
      mo=0;
    }
  }
}
if(t!=true)
cout<<"-1";
}
#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long sun=0,sum=0,N=0,tt,ff,x,y,z,k,j,i,d,h=0,J,f,first,last,diff,count=0,n=0;
int mx=0;
bool found=true;
bool t;
long long a[10001] = {0};
long long  b[10001] = {0};
string s;
    cin>>x>>y;
for(i=0;i<x;i++)
{   
    cin>>d;
    a[i]=d;
}
for(i=0;i<y;i++)
{   
    cin>>d;
    b[i]=d;
}
 
for(i=0;i<x && n < y;i++)
{
    if(a[i]==b[n])
    n++;
 
  if(n>=y)
  break;
}
 
if(n==y)
cout<<"YES";
else
cout<<"NO";
}
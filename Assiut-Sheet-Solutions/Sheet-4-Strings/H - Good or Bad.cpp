#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long s,n,t2,sum=0,count=0,x,y,xx=0,yy,z=0,k,j,i=0,d,f,mx=0,mn=0,l,row,colm;
bool found=true;
 
long long a[100000]= {0};
string ss,hh;
char c[100000];
cin>>n;
while(n--)
{
xx=0;
bool t=false;
cin>>ss;
while(xx+2 < ss.size())
{
if(ss[xx]=='1')
{
if(ss[xx+1]=='0')
if(ss[xx+2]=='1')
{
 t=true;
break;
}
}
else
if(ss[xx]=='0')
{
   if(ss[xx+1]=='1')
   if(ss[xx+2]=='0')
{
 t=true;
break;
}
}
 
xx++;
}
if(t)
cout<<"Good"<<endl;
else
cout<<"Bad"<<endl;
 
}
 
}
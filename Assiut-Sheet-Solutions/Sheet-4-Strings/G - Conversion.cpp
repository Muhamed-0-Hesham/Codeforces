#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long t,s,n,t2,sum=0,count=0,x,y,xx=0,yy,z=0,k,j,i=0,d,f,mx=0,mn=0,l,row,colm;
bool found=true;
bool tt=true;
long long a[100000]= {0};
string ss,hh;
char c[100000];
getline(cin,ss);
 
for(i=0;i<ss.size();i++)
{
   if(ss[i]>='a' && ss[i]<='z')
   ss[i]-=32;
   else
   if(ss[i]>='A' && ss[i]<='Z')
   ss[i]+=32;
   else
   if(ss[i]==',')
   ss[i]=' ';
}
cout<<ss;
 
}
#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long t,s,n,t2,sum=0,count=0,x,y,xx=0,yy,z=0,k,j,i=0,d,f,mx=0,l,row,colm;
bool found=true;
bool tt=true;
long long a[100000]= {0};
string ss;
char c;
 
cin>>t;
 
for(i=0;i<t;i++)
cin>>a[i];
 
for(i=0;i<t;i++)
{   
    
    if(a[i]==0)
{
 
    f=i;
 
for(j=0; j<i/2; j++)
{
    swap(a[j], a[f-1]);
    f--;
}
}
}
 
for(i=0;i<t;i++)
cout<<a[i]<<" ";
 
 
}
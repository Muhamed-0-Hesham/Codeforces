#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long count=0,sum=0,N=0,x,y,z,k,j,i,d,h=0,J,n,f;
int mx=0;
int mn=0;
bool t=true;
long long a[100000];
string s;
    cin>>x;
    a[0]=0;
    a[1]=1;
    if(x==1)
    cout<<0;
    else if (x==2)
    cout<<1;
    else
{
for(i=2;i<x;i++)
{
    a[i]=a[i-1]+a[i-2];
}
 
   cout<<a[x-1];
}
}
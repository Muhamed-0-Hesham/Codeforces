#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long count=0,sum=0,N,x,y,z,k,j,i,c,d,h,J,n,f,mn=0;
bool t=true;
long long a[100000];
long long b[100000];
cin>>n;
cin>>x;
a[0]=x;
mn=x;
for(k=1;k<n;k++)
{
    cin>>x;
    a[k]=x;
    mn=min(mn,a[k]);
}
for(i=0 ; i<n ;  i++)
{
    if(mn==a[i])
    count++;
}
if(count==0)
count++;
if(count%2==0)
cout<<"Unlucky";
else
cout<<"Lucky";
}
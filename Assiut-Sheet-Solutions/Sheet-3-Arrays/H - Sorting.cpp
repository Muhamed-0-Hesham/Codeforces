#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long count=0,sum=0,x,y,z,k,j,i,c,d,h,n;
bool t=true;
cin>>n;
long long a[100000];
long long b[100000];
 
for(i=0; i<n;i++)
{
    cin>>x;
    a[i]=x;
}
for(j=0;j<n;j++)
{
for(i=0; i<n-1;i++)
{
    if(a[i]>a[i+1])
        swap(a[i],a[i+1]);
}
}
for(i=0; i<n;i++)
cout<<a[i]<<" ";
}
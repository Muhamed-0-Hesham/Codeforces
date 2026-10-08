#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long count=0,sum=0,x,y,z,k,j,i,b,c,d,h,n;
bool t=false;
cin>>n;
long long a[100000];
for(i=0;i<n;i++)
{
    cin>>x;
    a[i]=x;
}
cin>>k;
j=-1;
for(i=0;i<n;i++)
{
    if(k==a[i])
    {
    t=true;
    j=i;
    break;
    }
}
cout<<j;
}
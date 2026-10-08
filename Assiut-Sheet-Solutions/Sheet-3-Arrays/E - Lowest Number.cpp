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
for(i=1;i<=n;i++)
{
    cin>>x;
    a[i]=x;
} 
sum=a[1];
j=1;
for(i=2;i<=n;i++)
{
  if(a[i]<sum)
    {
        sum=a[i];
        j=i;
    }
}
cout<<sum<<" "<<j;
}
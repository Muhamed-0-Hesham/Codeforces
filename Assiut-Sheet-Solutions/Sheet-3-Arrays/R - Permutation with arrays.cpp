#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long count=0,sum=0,N=0,x,y,z,k,j,i,d,h=0,J,n,f,first,last,mn=1000000001;;
int mx=0;
bool t=false;
long long a[100000];
long long b[100000];
string s;
    cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>d;
            a[i]=d;
        }
    for(i=0;i<n;i++)
        {
            cin>>d;
            b[i]=d;
        }
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(a[i]>a[j])
swap(a[i],a[j]);
 
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(b[i]>b[j])
swap(b[i],b[j]);
 
for(i=0;i<n;i++)
{
    if(a[i]!=b[i])
    {
        cout<<"no";
        return 0;
    }
}
cout<<"yes";
 
}
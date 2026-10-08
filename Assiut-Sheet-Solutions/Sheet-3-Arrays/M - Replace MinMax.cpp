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
int a[100000];
string s;
char c;
cin>>n; 
for(i=0; i<n; i++)
{
    cin>>x;
    a[i]=x;
}
mx=a[N];
mn=a[h];
for(i=1;i<n;i++)
{
    if(a[i]>mx)
    {
        mx=a[i];
        N=i;
    }
    if(a[i]<mn)
    {
        mn=a[i];
        h=i;
    }
        
}
swap(a[N],a[h]);
for(i=0; i<n; i++)
{
    cout<<a[i]<<" ";
}
 
}
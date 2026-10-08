#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long count=0,sum=0,N,x,y,z,k,j,i,d,h,J,n,f;
int mx=0;
bool t=true;
int a[100000];
string s;
char c;
cin>>n; 
for(N=0; N<n;N++)
{
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>f;
        a[i]=f;
   
    }
 
for(k=0; k<x;  k++)
{
   mx=a[k];
    for(i=k;    i<x;   i++)
    {
    
        mx=max(mx,a[i]);
        cout<<mx<<" ";
    }
}
cout<<endl;
}
}
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
    cin>>x>>y;
    sum=x*y;
    for(i=0; i<sum; i++)
    {
        cin>>d;
        a[i]=d;
    }
cin>>k;
    for(i=0; i<sum; i++)
    {
        if(a[i]==k)
        t=true;
    }
if(t)
cout<<"will not take number";
else
cout<<"will take number";
}
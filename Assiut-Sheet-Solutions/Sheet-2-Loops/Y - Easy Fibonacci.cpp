#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long k=0,n,i,j,f1,f2,sum=0,x=0,y,ones=0,count=0,num=0;
cin>>n;
f1=0;
f2=1;
for(i=0;i<n;i++)
{
    if(i==0)
    cout<<f1<<" ";
    else
    if(i==1)
    cout<<f2<<" ";
    else
    {
        x=f1+f2;
        cout<<x<<' ';
        f1=f2;
        f2=x;
    }
}
} 
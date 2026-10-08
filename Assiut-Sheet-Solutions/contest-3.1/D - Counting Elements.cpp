#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long t,s,n,t2,sum=0,count=0,x,y,xx=0,yy,z=0,k,j,i=0,d,f,mx=0,mn=0,l,row,colm;
bool found=true;
bool tt=true;
long long a[100000]= {0};
long long b[100000]= {0};
string ss;
char c;
 
cin>>x;
 
for(i=0;i<x;i++)
cin>>a[i];
sort(a,a+x);
 
for(i=0;i<x;i++)
{
   for(j=0;j<x;j++)
    {
        if(a[i]+1==a[j])
        {
        sum+=1;
            break;
        }
        }
}
cout<<sum;
 
 
}
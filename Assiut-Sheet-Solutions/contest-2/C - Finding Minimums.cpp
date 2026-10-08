#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long sum=0,count=0,x,y,xx=0,yy,z,k,j,i=0,d,f,mn,l;
bool found=true;
bool t=true;
long long a[100000]= {0};
string s;
char c;
    cin>>x>>y;
 
    for(i=0;i<x;i++)
        cin>>a[i];
    if(x%y==0)
    yy=x/y;
    else
    yy=(x/y)+1;
    i=0;
    while(yy--)
    {
        mn=a[i];
        count=0;
       for(;i<x;i++)
       { 
        mn=min(mn,a[i]);
        count++;
       if(count==y)
        break;   
    }i++;
  
       cout<<mn<<" ";
    }
 
}
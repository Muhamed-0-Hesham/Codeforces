
#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long sum=0,count=0,x,y,xx=0,yy,z,k,j,i=0,d,f,mx=0,l,row,colm;
bool found=true;
bool t=true;
long long a[100000]= {0};
string s;
char c;
cin>>x;
for(i=0;i<x;i++)
cin>>a[i];
for(i=0;i<x;i++)
{   
    count=0;
    while(a[i]%2==0 && a[i]>0)
    {
        count++;
        a[i]/=2;
    }
 
    mx=max(count,mx);
}
cout<<mx;
 
}
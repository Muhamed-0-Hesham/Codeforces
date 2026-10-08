#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int fun(int a,int b)
{
    return (a+b);
};
int main()
{
int t,s,n,t2,sum=0,count=1,x,y,xx=0,yy,z=0,k,j,i=0,d,f=1,mx=0,mn=0,l,row,colm;
bool found=true;
bool tt=true;
int freq [40]={0};
string ss,hh;
char c[100000];
cin>>n;
while(n--)
{
    cin>>ss>>hh;
    int maxLen = max(ss.size(), hh.size());
    for(i=0;i<maxLen;i++ )
    {
            if(i <ss.size())
             cout << ss[i];
            if(i <hh.size()) 
            cout << hh[i];
    }cout<<"\n";
}
}
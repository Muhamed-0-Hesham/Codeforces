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
getline(cin,ss);
z=1;
for(i=0;i<ss.size();i++)
{
    freq[ss[i]-'a']++;
}
for(char c='a' ; c<='z'; c++ )
{
    if(freq[c-'a']>0)
    {
        cout<<c<<" : "<<freq[c-'a']<<endl;
    }
}
}
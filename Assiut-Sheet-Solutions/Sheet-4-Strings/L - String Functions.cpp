#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long t,s,n,t2,sum=0,count=1,x,y,xx=0,yy,z=0,k,j,i=0,d,f=1,mx=0,mn=0,l,row,colm;
bool found=true;
bool tt=true;
int freq [40]={0};
long long a[100000];
string ss,hh;
char c;

cin>>x>>y>>ss;
while(y--)
{
    cin>>hh;
    if(hh == "substr")
    {
        cin>>xx>>yy;
         xx--;yy--;
            mx=max(xx,yy);mn=min(xx,yy);
        cout<<ss.substr(mn,mx-mn+1)<<"\n";
    }
    else if(hh=="sort")
    {
        cin>>xx>>yy;
         xx--;yy--;
            mx=max(xx,yy);mn=min(xx,yy);
        sort(ss.begin()+mn,ss.begin()+mx+1);
    }
    else if(hh=="pop_back")
            ss.pop_back();
    else if(hh=="back")
            cout<<ss.back()<<"\n";
    else if(hh=="front")
            cout<<ss.front()<<"\n";
    else if(hh=="reverse")
    {
            cin>>xx>>yy;
             xx--;yy--;
            mx=max(xx,yy);mn=min(xx,yy);
            reverse(ss.begin()+mn,ss.begin()+mx+1);
    }
    else if(hh=="push_back")
    {
            cin>>c;
            ss.push_back(c);
    }
else if(hh=="print")
    {
            cin>>xx;
            xx--;
            cout<<ss[xx]<<"\n";
    }
}
}
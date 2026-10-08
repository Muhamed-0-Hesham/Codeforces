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
hh="hello";
cin>>ss;

for(i=0;i<ss.size();i++)
{
    if(hh[z]==ss[i])
    {
        z++;
    }
    if(z>4)
    break;
}
if(z>4)
cout<<"YES";
else
cout<<"NO";

}
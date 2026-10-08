#include<iostream>
#include<string.h>
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
string ss,hh;
cin>>n;
cin.ignore();
for(i=0;i<n;i++)
{
getline(cin, ss);
if(ss.size() < 11)
cout<<ss<<endl;
else
cout<<ss[0]<<ss.size()-2<<ss[ss.size()-1]<<endl;
}
}

#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long sum=0,count_L=0,count_R=0,x,y,z,j,i,d,f,mx=0,mn=0,row,colm;
bool found=true;
bool tt=true;
int freq [40]={0};
long long a[100000];
string s,h;
char c;
getline(cin,s);
x=s.size();
for(i=0;i<x;i++)
{
 
    if(s[i]=='L')
    count_L++;
    else if (s[i]=='R')
    count_R++;
 
    if(count_L == count_R)
    {
    sum++;
    count_L=0;
    count_R=0;
    }
 
}
cout<<sum<<endl;
 
for(i=0;i<x;i++)
{
 
    if(s[i]=='L')
    {
    count_L++;
    cout<<s[i];
    }
    else if (s[i]=='R')
    {
    count_R++;
    cout<<s[i];
    }
    if(count_L == count_R)
    {
    sum--;
    cout<<endl;
    count_L=0;
    count_R=0;
    if(sum==0)
    break;
    }
 
}
}
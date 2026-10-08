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
    if(s[i]=='=')
    {
    i++;
    if(sum==0)
cout<<"username: ";
    if(sum==1)
cout<<"pwd: ";
    if(sum==2)
cout<<"profile: ";
    if(sum==3)
cout<<"role: ";
    if(sum==4)
cout<<"key: ";
 
        while(i<x  && s[i]!='&' )
        {
        cout<<s[i];
        i++;
        }
        sum++;
        if(sum<5)
        cout<<"\n";
    }
}




}
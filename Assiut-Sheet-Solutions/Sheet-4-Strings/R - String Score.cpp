#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long sum=0,count=0,x,y,z,j,i,d,f,mx=0,mn=0,row,colm;
bool found=true;
bool tt=true;
int freq [40]={0};
long long a[100000];
string s,h;
char c;
cin>>x;
cin.ignore();
getline(cin,s);
for(i=0;i<x;i++)
{


    if(s[i]=='V')
    count+=5;
    else if(s[i]=='W')
    count+=2;
    else if(s[i]=='X')
    {
     i++;   
    }
    else if(s[i]=='Y')
    {
        i++;
        x++;
        s.push_back(s[i]);
    }
    else if(s[i]=='Z')
    {
    if(s[i+1]=='V')
        {
        count/=5;
        i++;
        }
    else
        if(s[i+1]=='W')
        {
         count/=2;
        i++;
        }
    }

}
cout << count;

}
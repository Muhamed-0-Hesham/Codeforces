#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
int main()
{
long long sum=0,count_L=0,count_R=0,x,y,z,j,i,d,f,mx=0,mn=0,row,colm;
bool found=true;
bool tt=true;
long long freq[256] = {0};
long long a[100000];
string s,h;
string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
string ori="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char c;
cin>>x;
cin.ignore();
getline(cin,s);
y=s.size();

if(x==1)
{
    for(i=0;i<y;i++)
    {
        for(j=0;j<ori.size();j++)
        {
            if(s[i]==ori[j])
            {
            s[i]=key[j];
            break;
            }
        }
    }
}
else
{
        for(i=0;i<y;i++)
    {
        for(j=0;j<key.size();j++)
        {
            if(s[i]==key[j])
            {
            s[i]=ori[j];
            break;
            }
        }
    }
}
 cout<<s;
}
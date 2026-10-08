#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
void Equation(long long x , long long y)
{   long long sum=0,mo=1;
 
    if(y>0)
    {
    for(long long i=2;i<=y;i+=2)
    {
        mo=1;
        for(long long j=0;j<i;j++)
        mo*=x;
        sum+=mo;
    }
    
    }
    cout<<sum;

};
int main()
{
 long long sum=0,x,y,z,j,i,d,f,mx=0,mn=0,row,colm;
 bool found=true;
 bool tt=true;
 long long freq[256] = {0};
 long long a[100000];
 string s,h;
 char c;
 
 cin>>x>>y;
Equation(x,y);



}           


#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
void prim(long long x)
{   
    long long y=sqrt(x);
    bool t=false;

    for(y; y>1;y--)
    {
        if(x%y==0)
        {
        t=true;
        break;
        }
    }
    if(t)
    cout<<"NO\n";
    else
    cout<<"YES\n";

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
 cin>>x;
 for(i=0;i<x;i++)
 {
    cin>>y;
    if(y==1)
    cout<<"NO\n";
    else
    prim(y);
 }


}           


#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
long long sum=0,count_L=0,count_R=0,x,y,z,j,i,d,f,mx=0,mn=0,row,colm;
bool found=true;
bool tt=true;
long long freq[256] = {0};
long long a[100000];
string s,h;
char c;
getline(cin,s);
x=s.size();


 
    while(s.find("EGYPT")!=string::npos)
    {
        y=s.find("EGYPT");
        
        s.erase(y,5);
        s.insert(y, " ");
    }

    x=s.size();
for(i=0;i<x;i++)
cout<<s[i];

}
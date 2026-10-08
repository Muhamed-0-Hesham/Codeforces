#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long count=0,sum=0,N,x,y,z,k,j,i,d,h,J,n,f,mn=0;
bool t=true;
short a[1000000];
string s;
char c;
 
cin>>n;
cin>>s;
 
for(i=0;i<s.size();i++)
{
    sum+=s[i]-'0';
}
 
cout<<sum;
 
}
#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main() 
{
    
long long x,st,sec,trd;
double sum,div,ss;
cin>>st>>sec>>trd;
x=2147483647;
ss=st*sec;
sum=ss/(double)trd;
if(sum == (long long)sum )
{
if(-x<=sum && sum<=x)
cout<<"int";
else
cout<<"long long";
}
else
cout<<"double";
 
}
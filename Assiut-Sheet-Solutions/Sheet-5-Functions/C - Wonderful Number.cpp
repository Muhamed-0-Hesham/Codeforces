#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
bool wonderful (long long x)
{
    string s="",w;
      while(x!=0)
      {
        s+=(x%2)+'0';
        x/=2;
      }
      w=s;
      reverse(s.begin(),s.end());
      return w==s;
    };

bool even_or_odd(long long x)
{
    return x%2;
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
if(even_or_odd(x) && wonderful(x))
cout<<"YES";
else
cout<<"NO";
}           


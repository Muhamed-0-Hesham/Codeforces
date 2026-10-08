#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long n,t,s,t2,sum=0,x,y,xx=0,yy,z=0,k,j,i=0,d,f,mx=0,mn=0,l,row,colm,posi=0,nega=0,case1=0,case2=0;
bool found=true;
bool tt=true;
long long a[100000]= {0};
long long b[100000]= {0};
string ss;
char c;
#include <iostream>
#include <algorithm>
using namespace std;

    cin >> n;
    for(int i=0 ; i<n; i++)
    cin>>a[i];

for(int i=0;i<n;i++)
{
    
    if(i % 2 == 0)
    {
        if(a[i] < 0)
            case1++;
    }
    else
    {
        if(a[i] > 0)
            case1++;
    }
    if(i % 2 == 0)
    {
        if(a[i] > 0)
            case2++;
    }
    else
    {
        if(a[i] < 0)
            case2++;
    }
}
cout<<min(case1,case2);
}
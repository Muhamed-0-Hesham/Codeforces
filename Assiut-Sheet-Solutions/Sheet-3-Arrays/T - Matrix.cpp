#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long sun=0,sum=0,N=0,x,y,z,k,j,i,d,h=0,J,n,f,first,last;
int mx=0;
bool t=false;
int a[100][100];
string s;
    cin>>x;
for(i=0;i<x;i++)
    for(j=0;j<x;j++)
    {
        cin>>d;
        a[i][j]=d;
    }
 
    for(i=0;i<x;i++)
    {
        sum +=(a[i][i]);
    }
i--;
for(j=0;j<x;j++,i--)
{
    sun +=(a[i][j]);
}
 
f=sun-sum;
cout<<abs(f);
}
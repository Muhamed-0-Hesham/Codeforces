#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long count=0,sum=0,N=0,x,y,z,k,j,i,d,h=0,J,n,f;
int mx=0;
int mn=0;
bool t=true;
int a[100000];
string s;
 
 
cin>>x>>y;
char c[x+y+1];
char cc;
sum=x+y+1;
 
for(i=0;i<sum;i++)
{ 
    cin>>cc;
    c[i]=cc;
}
if(c[x]!='-')
{
    cout<<"No";
    return 0;
}
for(i=0;i<sum;i++)
{
    if(i==x)
    continue;
if(c[i] < '0' || c[i] > '9')
    {
        cout << "No";
        return 0;
    }
}
cout<<"Yes";
}
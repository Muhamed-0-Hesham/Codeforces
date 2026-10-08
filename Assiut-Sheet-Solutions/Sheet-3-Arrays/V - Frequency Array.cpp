#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long sum=0,count=0,x,y,z,k,j,i,d;
bool found=true;
bool t;
long long a[100000] = {0};
string s;
    cin>>x>>y;
    long long feq [y+1]={0};
for(i=0;i<x;i++)
{   
    cin>>d;
    a[i]=d;
    feq[a[i]]++;
}
 
for(i=1;i<=y;i++)
{
    cout<<feq[i]<<endl;
}
 
}
#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long count=0,sum=0,x,y,z,k,j,i,b,c,d,h,n;
bool t=false;
cin>>n;
long long a[100000];
for(i=0;i<n;i++)
{
    cin>>x;
    a[i]=x;
}
for(i=0;i<n;i++)
{
    if(a[i]<=10)
    cout<<"A["<<i<<"] = "<<a[i]<<endl;
 
}
 
}
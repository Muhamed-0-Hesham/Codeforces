#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
using namespace std;
int main() 
{
long long x,y,z,f;
cin>>x>>y>>z>>f;
long long xx=x%100,yy=y%100,zz=z%100,ff=f%100;
long long sum=xx*yy*zz*ff;
sum%=100;
 
if(sum<=9)
    cout<<"0"<<sum;
else
    cout<<sum;
 
}
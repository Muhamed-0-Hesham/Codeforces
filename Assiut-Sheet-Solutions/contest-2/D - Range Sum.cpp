#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long n,k,z,s,i,j,f1,f2,sum=0,x=0,y,y2,z2,ones=0,count=0,num=0;
cin>>n;
while(n--)
{
    cin>>x>>y;
    if(x>y)
    swap(x,y);
    sum=((x+y)*(y-x+1))/2;
    cout<<sum<<endl;
    sum=0;
} 
}
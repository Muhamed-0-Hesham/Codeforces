#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long k,z,s,i,j,f1,f2,sum=0,x=0,y,y2,z2,ones=0,count=0,num=0;
cin>>k>>s;
 
for(x=0;x<=k;x++)
{
    for(y=0;y<=k;y++)
    {
 
        z=s-x-y;
        if( z>=0 && z<=k)
        count++;
        
    }
}
cout<<count;
}
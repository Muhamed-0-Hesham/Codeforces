#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main() 
{
 
long long x,y,z;
cin>>x;
if(x<=1)
cout<<"-1";
else
if(x%2==0)
for(int i=2 ; i<=x ; i+=2 )
{
    cout<<i<<"\n";
}
else
{
    x-=1;
   for(int i=2 ; i<=x ; i+=2 )
{
    cout<<i<<"\n";
} 
}
}
#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
 
{
long long x,y,n,i,f,sd,td,forth,sumf,sum=0;
cin>>n>>x>>y;
 
for(i=1;i<=n;i++)
{
f=i;
sumf=0;
while(f!=0)
{
  sumf+=f%10;
  f/=10;
}
  if(x<=sumf && sumf<=y)
  sum+=i;
}
cout<<sum;
}
#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long n,x,y,i,max=0;
bool t;
cin>>n>>x;
for(i=1; i<=n || i<=x; i++)
{
  if(n%i==0)
  {
    if(x%i==0)
    if(i>max)
    max=i;
  }
}
cout<<max;
}
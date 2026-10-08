#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long y,n,i,x,mi,mx;
cin>>n;
for(i=1;i<=n;i++)
{
  long long sum=0;
  cin>>x>>y;
  mi=min(x,y);
  mx=max(x,y);
  mi++;
  for( ; mi<mx ; mi++)
  {
    if(mi%2!=0)
    sum+=mi;
  }
  cout<<sum<<endl;
}
}
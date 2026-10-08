#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long y,s,n,i,j,mx;
cin>>n;
for(i=0;i<n;i++)
{
  for(j=n-1;j>i;j--)
  cout<<" ";
  s=2*i+1;
  for(s;s>0;s--)
  cout<<"*";
  cout<<endl;
}
}
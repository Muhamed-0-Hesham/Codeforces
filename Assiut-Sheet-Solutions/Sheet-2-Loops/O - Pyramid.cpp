#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long n,x,j,i;
cin>>x;
for(i=1;i<=x;i++)
{
  for(j=0;j<i;j++)
  {
    cout<<"*";
  }cout<<endl;
}
}
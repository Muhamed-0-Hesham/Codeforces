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
  cin>>n;
  if(n==0)
  cout<<"0";
  while(n>0)
  {
    cout<<n%10<<" ";
    n/=10;
  }
  
  cout<<endl;
  }
}
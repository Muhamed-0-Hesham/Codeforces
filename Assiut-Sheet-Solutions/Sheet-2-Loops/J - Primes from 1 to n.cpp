#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
long long n,x;
bool t;
cin>>n;
for(long long i=2; i<=n ; i++)
{
  t=true;
  for(long long j = 2 ; j<i ; j++)
  {
    if(i%j==0)
    {
    t=false;
    break;
    }
  }
  if(t)
  cout<<i<<" ";
 
}
 
}

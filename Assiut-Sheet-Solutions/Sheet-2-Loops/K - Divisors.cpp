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
for(long long i=1; i<=n ; i++)
{
 
  if(n%i==0)
  {
    cout<<i<<endl;
  }
}
}
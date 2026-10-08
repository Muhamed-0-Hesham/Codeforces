#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
long long n,x,y;
cin>>n;
for(int i=0; i<n ; i++)
{
cin>>x;
long long fac=1;
for(int i=1; i<=x ; i++)
{
fac*=i;
}
cout<<fac<<"\n";
}
}
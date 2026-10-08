#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
long long x,n,max=0;
cin>>x;
for(int i=0; i<x ; i++ )
{
cin>>n;
if (max<=n)
max=n;
}
cout<<max;
}

#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
long long x,n,sum;
cin>>x;
for(int i=1; i<=12;i++)
{
    sum=x*i;
    cout<<x<<" * "<<i<<" = "<<sum<<endl;
}
 
}
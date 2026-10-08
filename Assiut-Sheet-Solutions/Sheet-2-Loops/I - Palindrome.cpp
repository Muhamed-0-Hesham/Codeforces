#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
long long f,n,z=0,x=0;
cin>>n;
f=n;
for(int i=0 ; i<=7 ; i++)
{
    z=n%10;
    n/=10;
    x=x+z;
    x*=10;
}
while(x%10==0)
{
    x/=10;
}
cout<<x<<endl;
if(x==f)
cout<<"YES";
else
cout<<"NO";
}
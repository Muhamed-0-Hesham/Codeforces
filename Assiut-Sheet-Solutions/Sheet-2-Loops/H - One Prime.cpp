#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
long long n,x;
double y;
cin>>n;
if(n==1)
{
cout<<"NO";
return 0;
}
else
{
    for(float i=2; i<n ; i++)
    {
    y=n/i;
    if( y == int(y) )
    {
    cout<<"NO";
    return 0;
    }
    }
    }
cout<<"YES";
}
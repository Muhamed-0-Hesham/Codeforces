#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long x,y,z;
    long long min=0;
    long long max=0;
    cin>>x>>y>>z;
 
if(x>y)
{
    if(x>z)
        max=x;
     else
        max=z;
    if(z>y) 
        min=y; 
     else
        min=z;
}
else 
{     
if(y>z)
    max=y;
    else
        max=z;
if(z>x)
    min=x;
else
    min=z;
}
    cout<<min<<" "<<max;
}
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x,z;
    long long y;
    cin>>x;
    y=x;
    z=x-y;
 
    if(z==0)
    cout<<"int "<<y;
    else
    cout<<"float "<<y<<" "<<z;
}
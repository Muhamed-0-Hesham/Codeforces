#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long x,y,z,max,mid,min;
    cin>>x>>y>>z;
    if(x>y)
    { 
       if(x>z)
       {
        max=x;
    if(z>y)
        {
            mid=z;
            min=y;
        }
    else
        {
            mid=y;
            min=z;
        }
       }
        else
        {
        max=z;
        mid=x;
        min=y;  
 
    }
    }
    else if(y>z)
    {
        max=y;
        if(x>z)
        {
            mid=x;
            min=z;
        }
        else
        {
            mid=z;
            min=x;
        }
    }
     else 
    {
     max=z;
     mid=y;
     min=x;
    }
 
        cout<<min<<endl;
        cout<<mid<<endl;
        cout<<max<<endl;
        cout<<endl;
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
}
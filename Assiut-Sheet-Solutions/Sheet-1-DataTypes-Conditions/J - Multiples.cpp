#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
if(x>y)
    {
    if(x%y==0)
    cout<<"Multiples";
        else
        cout<<"No Multiples";
    }
else
    {
          if(y%x==0)
    cout<<"Multiples";
        else
        cout<<"No Multiples";
    }
}
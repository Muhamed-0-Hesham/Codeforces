#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long x,y;
    char t;
    cin>>x>>t>>y;
    if(t =='+')
    cout<<x+y;
        else if(t =='-')
        cout<<x-y;
            else  if(t =='/')
            cout<<x/y;
                else  if(t =='*')
                    cout<<x*y;
    
}
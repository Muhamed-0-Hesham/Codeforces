#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    char u,j;
    long long x, y,res,sum;
    cin >> x >> u >> y >> j >> res;
    
if(u=='+')
    {
    sum=x+y;    
    if(res==sum)
    cout<<"Yes";
    else
    cout<<sum;
    }   
    
if(u=='-')
    {
    sum=x-y;    
    if(res==sum)
    cout<<"Yes"; 
    else
    cout<<sum;           
    }
 
if(u=='*')
    {
    sum=x*y;    
    if(res==sum)
    cout<<"Yes";
    else
    cout<<sum;
    }
}
#include <algorithm>   
#include <iostream>    
#include <string>     
#include <vector> 
#include <queue>
#include <stack>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n,x=0,y=0,z=0,sumx=0,sumy=0,sumz=0;
    cin>>n;
    while(n--)
    {
       cin>>x>>y>>z;
      sumx+=x;
      sumy+=y;
      sumz+=z;

    }
    if(sumx==0 && sumy==0 && sumz==0)
    cout<<"YES";
    else
    cout<<"NO";
}
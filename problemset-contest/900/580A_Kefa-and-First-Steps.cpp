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
    int maxx=1,sum=0,n,x=1;
    cin>>n;
   vector<int>v(n);
   cin>>sum;
   for(int i=1;i<n;i++)
   {
       cin>>v[i];
       if(sum <= v[i])
       {
          x++;
          maxx=max(maxx,x);
       }
       else
       x=1;
      
        sum=v[i];
   }
   cout<<maxx;
}
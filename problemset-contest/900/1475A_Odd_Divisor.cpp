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
    int n;
    long long x,i;
    cin>>n;
    while(n--)
    {
        cin>>x;
      
      if(x&(x-1))
      cout<<"YES\n";
      else
      cout<<"NO\n";
  }
}
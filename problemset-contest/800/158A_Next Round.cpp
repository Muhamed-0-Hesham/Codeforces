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
    int n,k,sum=0;
    cin>>n>>k;
 vector<int> v(n);
   for(int i=0;i<n;i++)
      cin>>v[i];
   for(int i=0;i<n;i++)
       if(v[i]>=v[k-1]&& v[i]>0 )
         sum++;
    cout<<sum;
  
}
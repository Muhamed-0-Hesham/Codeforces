#include <algorithm>   
#include <iostream>    
#include <string>     
#include <vector> 
#include <queue>
#include <stack>
#include <iomanip>
using namespace std;
int main()
{
    int n,m,a[100],mx,mn,sum=100000;
    cin>>n>>m;
    for(int i=0;i<m;i++)
      cin>>a[i];
    sort(a,a+m);
    
     for(int i=0; i<=m-n;i++)
     {
        sum=min(sum,a[i+n-1]-a[i]);
     }
    cout<<sum;
}
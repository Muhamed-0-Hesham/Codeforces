#include <algorithm>   
#include <iostream>    
#include <string>     
#include <vector> 
#include <queue>
#include <iomanip>
using namespace std;
int main()
{
    vector<int> v;
    int x,y,sum=0,s=0,i;
    cin>>x;
    while(x--)
    {
        cin>>y;
        v.push_back(y);
        sum+=y;
    }
    sort(v.rbegin(),v.rend());
    for(i=0;i<v.size();i++)
    {
      if(s>sum/2)
       break;
       s+=v[i];
    }
    cout<<i;
    
}
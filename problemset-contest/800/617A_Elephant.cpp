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
    int x,cnt=0;
    cin>>x;
    while(x>0)
    if(x>=5)
    {
        x-=5;
        cnt++;
    }else if(x>=4)
    {
        x-=4;
        cnt++;
    }else if(x>=3)
    {
        x-=3;
        cnt++;
    } else if(x>=2)
    {
        x-=2;
        cnt++;
    }else if(x>=1)
    {
        x-=1;
        cnt++;
    }
   cout<<cnt;
    
}
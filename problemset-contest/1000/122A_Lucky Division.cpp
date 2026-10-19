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
    bool t=false;
    int x,digit=0,lucky[]={4,7,44,77,47,74,444,447,477,474,744,747,774,777};
    cin>>x;
     for(int i : lucky )
     {
        if(x%i==0)
        {
            t=true;
            break;
        }
     }
    if(t)
    cout<<"YES";
    else
    cout<<"NO";
}
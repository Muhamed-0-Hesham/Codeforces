#include <algorithm>   
#include <iostream>    
#include <string>     
#include <vector> 
#include <queue>
#include <iomanip>
using namespace std;
int main()
{
    int x,a,b,c,sum=0;
    cin>>x;
    while(x--)
    {
        cin>>a>>b>>c;
        if((a+b+c)>1)
        sum++;

    }
    cout<<sum;
}
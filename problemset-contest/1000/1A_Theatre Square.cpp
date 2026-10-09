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
    long long x,y,z,f=0,sum=0;
    cin>>x>>y>>z;
    f=ceil(x/(double)z);
    sum=ceil(y/(double)z);
    cout<<f*sum;

}
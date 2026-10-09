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
    int x,a[101]={0};
     cin>>x;
    for(int i=0;i<x;i++)
    cin>>a[i];
    sort(a,a+x);

    for(int i=0;i<x;i++)
    cout<<a[i]<<" ";

}
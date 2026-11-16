#include <algorithm>   
#include <iostream>    
#include <string>     
#include <vector> 
#include <queue>
#include <stack>
#include <iomanip>
#include <cmath>
using namespace std;
void loop_6(int &a ) 
{

    
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,cnt=0;
        cin>>x;
        while(x%6==0)
        {
            x/=6;
            cnt++;
        }
        if(x%7==0 || x%5==0 || x%4==0)
        {
        cout<< -1<< '\n';
        continue;
        } 
        while(x%3==0)
        {
            x*=2;
            x/=6;
            cnt+=2;
        }
        if(x%2==0)
        {
         cout<< -1<< '\n';
         continue;

        }
        if(x==1)
        cout<<cnt<<'\n';
        else
        cout<< -1<< '\n';
    }
}
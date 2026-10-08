#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    char u;
    long long x, y;
    cin >> x >> u >> y;
    
    if(x==y)
    {
        if(u=='=')
        cout<<"Right";
        else
        cout<<"Wrong";
    }
    
    else if(x>y)
    {
        if(u=='>')
        cout<<"Right";
         else
        cout<<"Wrong";
    }   
    
    else if(x<y)
    {
        if(u=='<')
        cout<<"Right";
         else
        cout<<"Wrong";
    }
}
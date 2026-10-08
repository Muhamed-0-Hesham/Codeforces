#include <algorithm>   
#include <iostream>    
#include <string>     
#include <vector> 
#include <queue>
#include <iomanip>
using namespace std;
int main()
{
    int x,n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s=="X++")
        x++;
        else if(s=="++X")
        ++x;
        else if(s=="--X")
        --x;
        else if(s=="X--")
        x--;
    }
    cout<<x;
}
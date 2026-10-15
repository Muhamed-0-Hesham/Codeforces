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
    deque<char>st;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s.substr(i,3)=="WUB")
           s.replace(i, 3, " "); 

        
    }
    for(int i=0;i<s.size();i++)
    {
    if(s[i]!=' ')
    t=true;
    if(t)
    cout<<s[i];
    }
}
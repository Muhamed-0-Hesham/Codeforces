#include <algorithm>   
#include <iostream>    
#include <string>     
#include <vector> 
#include <queue>
#include <stack>
#include <iomanip>
#include <cmath>
#include <cctype>
using namespace std;
int main()
{
    int x,cnt=0;
    stack< char > s;
    char c;
     cin>>x>>c;
     s.push(c);
     for(int i=0;i<x-1;i++)
     {
        cin>>c;
         if(s.top()==c)
         cnt++;
         s.push(c);
    }cout<<cnt;

}
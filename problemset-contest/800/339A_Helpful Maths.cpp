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
    int i;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++)
    {
        if(s[i]!='+')
        break;
    }
    for(i;i<s.size();i++)
    {
           cout<<s[i];
          if(i!=s.size()-1)
          cout<<"+";
    }
}
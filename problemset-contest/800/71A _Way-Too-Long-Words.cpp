#include <algorithm>   
#include <iostream>    
#include <string>     
#include <vector> 
#include <queue>
#include <iomanip>
using namespace std;
int main()
{
 string s;
 int x;
 cin>>x;
  while(x--)
  {
    cin>>s;
    if(s.size()>10)
    cout<<s[0]<<(s.size()-2)<<s[s.size()-1]<<"\n";
    else
    cout<<s<<"\n";
  }
}
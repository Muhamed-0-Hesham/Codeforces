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
    string s;
    int state=0;
    cin>>s;
    bool t=true;
    for(int i=0; i<s.size();i++)
  { 
        if(s[i]=='h' &&state==0)
    state++;
     else if(state==1 && s[i]=='e')
    state++;
        else if(state==2 && s[i]=='l')
    state++;
        else if(state==3 && s[i]=='l')
    state++;
        else if(state==4 && s[i]=='o')
    state++;
  }
  
   if(state==5)
   cout<<"YES";
   else 
   cout<<"NO";

}
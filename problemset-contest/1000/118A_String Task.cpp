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
    queue<char>q;
   string s;
   char c;
   cin>>s;
   for(int i=0; i<s.size();i++)
   {
        c=s[i];
        if(c>='A' && c<='Z')
           c =c - 'A' + 'a';
       if(c>='a' && c<='z')
        {
         if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i')
         {
            q.push('.');
            q.push(c);
         }
        }
   }
   while(!q.empty())
   {
    cout<<q.front();
    q.pop();
   }
}
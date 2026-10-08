#include <algorithm>   
#include <iostream>    
#include <string>     
#include <vector> 
#include <queue>
#include <iomanip>
using namespace std;
int main()
{
    int x=-1,y=-1;
    string s;
    cin>>s;
 if (s.find("0000000") != string::npos || s.find("1111111") != string::npos)
    cout << "YES";
  else
    cout << "NO";
}
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
    cin>>s;
 if (s.find_first_of("HQ9") != string::npos)
    cout << "YES";
 else
    cout << "NO";
}
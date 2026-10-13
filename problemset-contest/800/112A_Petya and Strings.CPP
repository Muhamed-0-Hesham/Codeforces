#include <algorithm>   
#include <iostream>    
#include <string>     
#include <vector> 
#include <queue>
#include <iomanip>
using namespace std;

int main() {
    string a, b;
    cin>>a>>b;

    for (char &c : a)
        if (c >= 'A' && c <= 'Z')
         c = c - 'A' + 'a';

    for (char &c : b)
        if (c >= 'A' && c <= 'Z') 
         c = c - 'A' + 'a';

    if (a < b) cout << -1;
    else if (a > b) cout << 1;
    else cout << 0;
}
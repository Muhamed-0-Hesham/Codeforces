#include <algorithm>   
#include <iostream>    
#include <string>     
#include <vector> 
#include <queue>
#include <stack>
#include <iomanip>
using namespace std;
int main()
{
    long long n,odd,k;
    cin>>n>>k;
    odd =(n + 1)/2;
    if (k <= odd)
        cout << 2*k - 1;
    else
        cout << 2*(k - odd);
}
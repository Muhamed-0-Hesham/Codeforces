#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main() 
{
 
long long x,first,sec;
cin>>x;
first=x%10;
sec=(x-first)/10;
if(first%sec==0 ||sec%first==0 )
cout<<"YES";
else
cout<<"NO";
}
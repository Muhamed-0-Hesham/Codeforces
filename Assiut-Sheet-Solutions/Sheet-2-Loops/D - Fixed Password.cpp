#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
long long pass=1999,x=0,n;
while(x==0)
{
     cin>>n;
    if(n==pass)
     {
    cout<<"Correct";
    x++;
}
else
cout<<"Wrong\n";
}
}
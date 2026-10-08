#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main() 
{
 
long long n,x,even=0,odd=0,negative=0,positive=0;
cin>>n;
for(int i =0 ; i<n ; i++)
{
    cin>>x;
    if(x%2==0)
    even++;
    else
    odd++;
    if(x>0)
    positive++;
    else if(x<0)
    negative++;
}
cout<<"Even: "<<even<<endl;
cout<<"Odd: "<<odd<<endl;
cout<<"Positive: "<<positive<<endl;
cout<<"Negative: "<<negative<<endl;
}
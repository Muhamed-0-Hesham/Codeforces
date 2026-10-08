#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long num,x;
    cin>>num;
    x=num%1000;
    num-=x;
    num/=1000;
    if(num%2==0)
    cout<<"EVEN";
    else
    cout<<"ODD";
 
    
    
}
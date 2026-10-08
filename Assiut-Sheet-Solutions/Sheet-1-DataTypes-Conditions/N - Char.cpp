#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    char x,y;
    cin>>x;
    if(x>=97 && x<=123)
        y=x-32;
    else
    y=x+32;
    cout<<y;
}
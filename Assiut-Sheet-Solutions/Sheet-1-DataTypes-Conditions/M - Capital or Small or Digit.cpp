#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    char x;
    cin>>x;
 
    if(x>=48 && x<=57)
        cout<<"IS DIGIT";
    if(x>=65 && x<=91)
    {    
    cout<<"ALPHA"<<endl;
    cout<<"IS CAPITAL";
    }
    if(x>=97 && x<=123)
   {
    cout<<"ALPHA"<<endl;
    cout<<"IS SMALL";
   }
}
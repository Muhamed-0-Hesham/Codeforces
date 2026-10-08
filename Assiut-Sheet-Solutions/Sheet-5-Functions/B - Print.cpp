#include<iostream>
using namespace std;
 
void N_function(int a)
{
    for(int i=1;i<=a;i++)
    {
        cout<<i;
        if(i!=a)
        cout<<" ";
    }
}
int main()
{
int x;
cin>>x;
N_function(x);
}
#include <iostream>
using namespace std;
int main()
{
    int Limak,bob,cnt=0;
    cin>>Limak>>bob;
   
    for(int i=0;Limak<=bob; i++ )
    {
        cnt++;
        Limak*=3;
        bob*=2;
    }
    cout<<cnt;
}
#include <iostream>
using namespace std;
int main()
{
long long L1,R1,L2,R2,MAX,MIN;
cin>>L1>>R1>>L2>>R2;
 
if(L1>L2)
MIN=L1;
else
MIN=L2;
if(R1<R2)
MAX=R1;
else
MAX=R2;
 
if(MAX>=MIN)
cout<<MIN<<" "<<MAX;
else
cout<<-1;
}
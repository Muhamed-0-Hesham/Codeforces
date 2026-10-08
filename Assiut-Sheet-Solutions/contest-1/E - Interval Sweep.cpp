#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
using namespace std;
int main() 
{
long long a,b,diff,dif,sum;
cin>>a>>b;
sum=a+b;
diff=a-b;
dif=b-a;
if(a==0 && b==0)
cout<<"NO";
else if(abs(a-b) <= 1)
cout<<"YES";
else
cout<<"NO";
}
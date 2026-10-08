
#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long n;
    cin>>n;
  for(n;n>0; n--)
{
long long k,i,j,f,sum=0,x,y,ones=0,count=0,num=0;
cin>>x;
while(x>0)
  {
    if(x%2==0)
      x/=2;
    else
      {
        x/=2;
        sum+=1;
      }
  }
for(i=0; sum>i; i++ )
num+=pow(2,i);
cout<<num<<endl;
num=0;
}
}
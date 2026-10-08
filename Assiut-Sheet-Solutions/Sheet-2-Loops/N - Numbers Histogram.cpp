#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long n,x,j,i,a[50];
char o;
 
cin>>o>>x;
for (i=1;i<=x;i++)
{
  cin>>n;
  a[i]=n;
}
i=1;
while(x!=0)
{
  for(j=0; j<a[i]; j++)
  {
    cout<<o;
  }
  cout<<endl;
  x--;
  i++;
}
 
 
}
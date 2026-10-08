#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long n,k,i,j,f,x,y,sum=0;
    cin>>n;
   
    for(i=0;i<n;i++)
  {
     k=(2*i)+1;
    for(j=i;j<(n-1);j++)
    cout<<" ";
    for(k;  k>0;  k--)
    cout<<"*";
    cout<<endl;
  }
 
  for(i; i>0 ;i-- )
  {
    
    for(j=i;j<n;j++)
    cout<<" ";
    for(x=(2*i)-1;x>0;x-- )
    cout<<"*";
    cout<<endl;
  }
}
#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long count=0,sum=0,N,x,y,z,k,j,i,c,d,h,J,n,f;
bool t=true;
long long a[100000];
long long b[100000];
cin>>n;
for(k=0;k<n;k++)
{
    f=100000000;
    cin>>N;
 
 
    for(j=0 ; j<N ; j++)
{
        cin>>y;
        a[j]=y;
}
 
for(i=1;i<N;i++)
{
      J=N;
    for( ;J>i;J--)
    {
        sum=( a[i-1] + a[J-1] + (J-i)  );
        f=min(sum,f);
    }
 
}
 
cout<<f<<endl;
 
 
}
 
 
 
}
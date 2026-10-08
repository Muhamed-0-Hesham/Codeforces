#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long s,i,j,sum=0,x,y,y2,z2,ones=0,count=0,num=0;
int n,h;
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
{
    cin>>h;
    arr[i]=h;
    sum+=arr[i];
}
if(sum<0)
sum=-1*sum;
cout<<sum;
 
}
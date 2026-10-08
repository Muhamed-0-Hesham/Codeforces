#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long count=0,sum=0,x,y,z,k,j,i,a,b,c,d,h,n;
char back ='\\';
char front='/';
cin>>n;
x=n/2;
for(i=1 ; i<=n;i++)
{
   
   for(j=0;j<n;j++)
   {
    if(x==(i-1) &&x==j)
        cout<<"X";
        else
        if(j==(i-1))
        cout<<back;
        else
    if(i==(n-j))
        cout<<front;
        else    
        cout<<"*";
    }
   cout<<endl;
}
}
#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long sum=0,count=0,x,y,z,k,j,i,d;
bool found=true;
bool t;
long long a[100][100] = {0};
string s;
    cin>>x>>y;
    long long feq [y+1]={0};
for(i=0;i<x;i++)
{   
    for(j=0;j<y;j++)
    {
    cin>>d;
    a[i][j]=d;
    }
}
 
j--;
k=j;
for(i=0;i<x;i++)
{  
    j=k;
    for(j;j>=0;j--)
    {
    cout<<a[i][j]<<" ";
    }cout<<endl;
}
}
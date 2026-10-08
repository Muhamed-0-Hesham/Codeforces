#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long count=0,sum=0,N=0,x,y,z,k,j,i,d,h=0,J,n,f,mn=1000000001;;
int mx=0;
bool t=true;
long long a[100000];
string s;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>x;
        a[i]=x;
        while(a[i]%2==0)
        {
            a[i]=a[i]/2;
            count++;
        }
        mn=min(count,mn);
        count=0;
    }
cout<<mn;
}
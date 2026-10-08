#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long count=0,sum=0,N=0,x,y,z,k,j,i,d,h=0,J,n,f,first,last,mn=1000000001;;
int mx=0;
bool t=true;
long long a[100000];
string s;
    cin>>n;
    
    for(z=0;z<n;z++)
    {
        count=0;
        cin>>x;
        for(i=0;i<x;i++)
        {
            cin>>d;
            a[i]=d;
            count++;
        }
   for(i=0;i<x;i++)
   {
 
       for(j=i+1; j<x ; j++)
       {
        if(a[j-1]<a[j])
        count++;
        else
        break;
       }
 
    }
    
 
        cout<<count<<endl;
 
    }
}
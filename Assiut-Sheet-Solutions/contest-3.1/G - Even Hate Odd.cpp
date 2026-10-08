#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long n,t,s,t2,sum=0,x,y,xx=0,yy,z=0,k,j,i=0,d,f,mx=0,mn=0,l,row,colm;
bool found=true;
bool tt=true;
long long a[100000]= {0};
long long b[100000]= {0};
string ss;
char c;
cin>>n;
while(n--)
{
int even=0,odd=0,count=0;
    cin>>x;
    if(x%2!=0)
    {
    cout<<-1<<"\n";
    continue;
    }
    for(int i=0;i<x;i++)
    {
    cin>>a[i];
    if(a[i]%2==0)
    even++;
    else
    odd++;
    }
    if(even==odd)
    cout<<0<<"\n";
    else if(even > odd)
    {
    
    for(int i=0;i<x;i++)
        if(a[i]%2==0)
        {
        if(odd==even)
            break;
        a[i]++;
        odd++;
        even--;
        count++;
        }
    cout<<count<<"\n";  
    }
    else if(odd > even)
    {
    for(int i=0;i<x;i++)
        if(a[i]%2!=0)
        {
        if(odd==even)
            break;
        a[i]++;
        even++;
        odd--;
        count++;  
        }
    cout<<count<<"\n"; 
    }
}
 
}
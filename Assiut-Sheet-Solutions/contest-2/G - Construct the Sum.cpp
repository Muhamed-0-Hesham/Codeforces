#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long t,s,n,sum=0,count=0,x,y,xx=0,yy,z=0,k,j,i=0,d,f,mx=0,l,row,colm;
bool found=true;
bool tt=true;
long long a[100000]= {0};
string ss;
char c;
cin>>t;
while(t--)
{
    cin>>n>>s;
    mx=0;
    mx = n * (n + 1) / 2;
    if(s>mx)
    {
        cout<<-1<<endl;
        continue;
    }
 
    for(i=n;i>=1;i--)
    {
        if(s>=i)
        {
            cout << i << " ";
            s -= i;
        }
 
    }      
    cout<<endl;
 
 
}
 
 
}
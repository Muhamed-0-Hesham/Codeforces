#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long sum=0,count=0,x,y,xx,yy,z,k,j,i,d,f,l;
bool found=true;
bool t=true;
long long a[100000]= {0};
long long pre[100000]= {0};
string s;
char c;
    cin>>x>>y;
    long long feq [y+1]={0};
    for(i=1;i<=x;i++)
    {
  
            cin>>d;
            a[i]=d;
            pre[i]=pre[i-1]+a[i];
    }
for(i=0;i<y;i++)
{
    sum=0;
    cin>>f>>l;
sum=pre[l]-pre[f-1];
cout<<sum<<endl;
}
 
}
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
string s;
char c;
    cin>>x>>y;
    for(i=0;i<x;i++)
        cin>>a[i];
    sort(a,a+x);
for(i=0;i<y;i++)
{
    cin>>d;
if(binary_search(a, a + x, d))
    cout<<"found"<<endl;
else
    cout<<"not found"<<endl;
}
}
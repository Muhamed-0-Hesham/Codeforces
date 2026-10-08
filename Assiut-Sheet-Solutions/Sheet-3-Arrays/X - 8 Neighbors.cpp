#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long sum=0,count=0,x,y,xx,yy,z,k,j,i,d;
bool found=true;
bool t=true;
long long a[100][100] = {0};
string s;
char c;
    cin>>x>>y;
    long long feq [y+1]={0};
 
    for(i=1;i<=x;i++)
    {
        for(j=1; j<=y; j++)
        {   
            cin>>c;
            a[i][j]=c;
        }
    }
    cin>>xx>>yy;
    
    for(i=xx-1;i<=xx+1;i++)
    {
        
        for(j=yy-1; j<=yy+1; j++)
        {   
            if(i==xx && j==yy)continue;
            if(a[i][j]=='.')
            t=false;
        }
    }
    if(t)
    cout<<"yes";
    else
    cout<<"no";
 
}

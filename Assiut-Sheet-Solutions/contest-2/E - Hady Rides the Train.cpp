#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
long long sum=0,count=0,x,y,xx=0,yy,z,k,j,i=0,d,f,mn,l,row,colm;
bool found=true;
bool t=true;
long long a[100000]= {0};
string s;
char c;
cin>>x;
row=x/4;
if(row%2==0)
colm=x%4;
else
colm=3-abs(x%4);
cout<<row<<" "<<colm;
 
}
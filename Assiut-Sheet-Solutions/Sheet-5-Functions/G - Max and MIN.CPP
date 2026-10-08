#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
void Max_and_MIN(long long x)
{  int mx=-1,mn=100001,a[100000];
    for(long long i=0;i<x;i++)
    {
    cin>>a[i];
    mx=max(mx,a[i]);
    mn=min(mn,a[i]);
    }   
    cout<<mn<<" "<<mx;
};
int main()
{
 int x;
 cin>>x;
 Max_and_MIN(x);



}           


#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main() 
{
    long long x,sum=0,i;
    cin>>x;
    for(i=1; i*i<=x ;i++)
    {
       if(x%i==0)
       {
        sum+=i;
        if(i!=x/i)
        sum+=x/i;
       }
    } 
    cout<<sum;
}
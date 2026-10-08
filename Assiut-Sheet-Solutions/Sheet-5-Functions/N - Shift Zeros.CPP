#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
void Shift_Zeros(int x,int a[])
{
    int count=0;
     for(int i=0;i<x; i++)
        if(a[i]==0)
         count++;
     
     
  
    for(int i=0;i<x; i++)   
     if(a[i]!=0)   
     cout<<a[i]<<" ";

     for(int i=0;i<count;i++)
     {
     cout<<0;
     if(i!=x-1)
     cout<<" ";
     }
}  
int main() 
{
    int n,a[1002]={0};
    cin >> n;
    for(int i=0;i<n; i++)
        cin>>a[i];
  
     Shift_Zeros(n,a);
}
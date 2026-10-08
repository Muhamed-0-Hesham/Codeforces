#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
void Distinct(int x,int a[])
{
    int count=x;
  
    for(int i=0;i<x; i++)
    {
      bool t=false;
     for(int j=0;j<i; j++)
     {
       
         if(i!=j)
           if(a[i]==a[j])
           {
            t=true;
           break;
          }
          
     }
          if(t)
          count--;
    }
    cout<<count;
  
}
  
int main() {
    int n,a[2002]={0};
    cin >> n;
    for(int i=0;i<n; i++)
        cin>>a[i];
    sort(a,a+n);
     Distinct(n,a);
}
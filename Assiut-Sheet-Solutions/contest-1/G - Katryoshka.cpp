#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
using namespace std;
int main() 
{
    long long e,m,b,the_smaller,sum;
    double twoE,sumM,sumB;
    cin>>e>>m>>b;
    if(e>m)
    {
    if(m>b)
    {
    the_smaller=b;
    cout<< the_smaller;
    }
    else
    {
    the_smaller=m;
    e=e-m;
    b=b-m;
    twoE=e/2.0;
    if(twoE>b)
    {
    sum=the_smaller+b;
    cout<<sum;
    }
    else
    {
        sum=the_smaller+twoE;
        cout<<sum;
    }
 
    }
    }
    else
    if(e>b)
    {
    the_smaller=b;
    cout<< the_smaller;
    }
    else
    {
    the_smaller=e;
    sum=the_smaller;
    cout<<sum;
    }
    
    
    
    }
    
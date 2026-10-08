#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
void Average(int n)
{
    double x,sum,avg;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
  avg=sum/n;
  cout<<fixed<<setprecision(7)<<avg;
};
int main()
{
 int N;
 cin>>N;
 Average(N);
}
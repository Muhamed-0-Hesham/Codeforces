#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
using namespace std;
int main() 
{
int x,p; 
double O ;
cin>>x>>p;
O = (100.0 * p)/(100-x);
cout<<fixed<<setprecision(2)<<O;
}
#include<iostream>
#include<fstream>
#include<iomanip>
#include <cmath>
using namespace std;
int main() 
{
long long a,b,c,d;
cin>>a>>b>>c>>d;
double ab=b*log(a),cd=d*log(c);
if(ab>cd)
cout<<"YES";
else
cout<<"NO";
}
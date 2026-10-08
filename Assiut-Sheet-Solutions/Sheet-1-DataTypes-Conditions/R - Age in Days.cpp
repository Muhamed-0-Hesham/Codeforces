#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    double day,month=0,year=0;
    cin>>day;
    while (day>=30)
    {
    day-=30;
    month+=1;
    if (month>=12)
    {  
        month-=12;
        year+=1;
        day-=5;
    }
    
}
 
    cout<<year<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<day<<" days"<<endl;
}
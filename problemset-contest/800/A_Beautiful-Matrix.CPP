#include <algorithm>   
#include <iostream>    
#include <string>     
#include <vector> 
#include <queue>
#include <iomanip>
using namespace std;
int main()
{ 
    int x=0,y=0,sum=0;
    int a[6][6]={0};
    for(int i=1;i<=5;i++)
     for(int j=1;j<=5;j++)
     {
     cin>>a[i][j];
     if(a[i][j]==1)
       {
        x=i;y=j;
       }
     }
 while (x != 3) {
    if (x < 3) x++;
    else x--;
    sum++;
   }
  while (y != 3) {
    if (y < 3) y++;
    else y--;
    sum++;
   }
cout << sum;
}
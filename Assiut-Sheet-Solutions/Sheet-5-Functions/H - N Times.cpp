#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
void H_N_Times(long long N)
{  int T; char C;
    while(N--)
    {
    cin>>T>>C;
    for(int i=0; i<T; i++) 
        {
          cout<<C;
          if(T>1)
            {
                if(i+1==T)
                break;
               cout<<" ";
          
         
            }
        }
        cout<<"\n";
    }
};
int main()
{
 int N;
 cin>>N;
H_N_Times(N);


}           


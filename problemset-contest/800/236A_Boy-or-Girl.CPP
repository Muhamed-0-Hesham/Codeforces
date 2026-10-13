#include <algorithm>   
#include <iostream>    
#include <string>     
#include <vector> 
#include <queue>
#include<cmath>
#include <iomanip>
using namespace std;

int main() {
    string s;
    int sum=0;
    bool t=false;
    cin>>s;
    int freq [256]={0};
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]]++;
        if(freq[s[i]]==1)
        sum++;
    }
    if(sum%2==0)
    cout<<"CHAT WITH HER!";
    else 
    cout<<"IGNORE HIM!";
}
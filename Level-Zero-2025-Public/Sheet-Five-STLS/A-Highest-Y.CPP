#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int x;
    cin>>x;
    pair<int,int>p[x];
    for(int i=0;i<x;i++)
        cin>>p[i].second>>p[i].first;
        sort(p,p+x);

    for(int i=x-1;i>=0;i--)
    cout<<p[i].second<<" "<<p[i].first<<endl;

}
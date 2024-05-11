#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    map<string,int>mp;
    cin>>n;
    for( int i=0;i<n; i ++)
    {
    cin>>s;
    if(mp[s]==0)
    cout<<"OK"<<endl;
    else
    cout<<s<<mp[s]<<endl;
    mp[s]++;}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int p=0,l=0;
    cin>>a;
    cin.ignore();
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='o')
        {
         p++;
        }else{l++;}
    }
    if(l==0||p==1||p==0){cout<<"YES"<<endl;}
 
    else{
        if(l%p==0){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
    }
}
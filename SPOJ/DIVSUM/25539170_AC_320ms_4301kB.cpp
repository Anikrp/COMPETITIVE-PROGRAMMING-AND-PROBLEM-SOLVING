#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
int main(){
    fast;
    ll t,n,i,s;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;
        for(i=1; i*i<n; i++)
        {
       if(n%i==0) s=s+i+n/i;
          }
        if(i*i==n)
            s=s+i;
            s=s-n;
        cout<<s<<endl;
    }

}
//ANIK
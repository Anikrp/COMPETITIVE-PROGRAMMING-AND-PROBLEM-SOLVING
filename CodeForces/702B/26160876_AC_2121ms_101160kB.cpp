#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
bool isPoweroftwo(ll x){
    return (x&(x-1))==0;
}
int main(){
    ll n,ans=0;;
    map<int,int>m;
    cin>>n;
    ll arr[n];
    for(ll i =0;i<n;i++){
            cin>>arr[i];
    }
 
    for(ll i = 0;i<n;i++){
       for(ll j=1; j<=2e9; j+=j){
           ans+=m[j-arr[i]];
 
        }
        m[arr[i]]++;
    }
          cout<<ans<<nl;
 
 
 
}
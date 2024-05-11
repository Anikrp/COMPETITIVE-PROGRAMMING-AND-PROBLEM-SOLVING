#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
ll mod(ll a, ll b ){
if (b== 0){
    return 1;
}else if(b%2==0){
    ll ans = mod(a,b/2);
    return ((ans%10 * ans % 10) %10);
}else
return ((a%10 * mod(a,b-1)%10)%10);
}

int main(){
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<mod(a,b)<<nl;

    }
}
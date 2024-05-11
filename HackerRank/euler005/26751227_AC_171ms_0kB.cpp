#include<iostream>
#include<math.h>
#define ll long long int
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d: ",ca)
#define mx 5000009
int n;
using namespace std;
ll gcd(ll n , ll m){
    if(m == 0){
        return n;
    }return gcd(m,n%m);
}
ll lcm(ll n, ll m){
    return (n/gcd(n,m))*m;
}
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll ans = 1;
    for(int i = 1;i<n;i++){
        ans = lcm(ans,i+1);
    }

    cout<<ans<<nl;

    }
}

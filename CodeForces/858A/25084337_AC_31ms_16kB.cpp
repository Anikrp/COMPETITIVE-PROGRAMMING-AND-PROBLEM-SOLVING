#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
ll gcd(ll a, ll b)
{
    if(b==0)
        return a;
 
    return gcd(b,a%b);
}
 
int main()
{
    ll n; int k; cin>>n>>k;
    ll p =round(pow(10,k));
 
    ll ans= (p*n)/ gcd(p,n);
 
    cout<<ans<<endl;
}
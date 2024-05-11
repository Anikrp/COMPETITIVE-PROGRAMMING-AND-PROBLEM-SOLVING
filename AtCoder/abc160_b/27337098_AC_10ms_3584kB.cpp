#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;

int main(){
    int n;
    cin>>n;
    ll ans;
    ll x= (n/500)*1000;
    ans = x+((n%500)/5)*5;
    cout<<ans<<nl;
  return 0;
}
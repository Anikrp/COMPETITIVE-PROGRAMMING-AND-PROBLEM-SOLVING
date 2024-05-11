#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
int arr[10000];
using namespace std;
int main()
{
    fast;
    ll a,b,n;
    cin>>a>>b>>n;
    ll ans = (b/n)-(a/n);
        if(a%n==0){
            cout<<ans+1<<nl;
        }else{
              cout<<ans<<nl;
        }


}

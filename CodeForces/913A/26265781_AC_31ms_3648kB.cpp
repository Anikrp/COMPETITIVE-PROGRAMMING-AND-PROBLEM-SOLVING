#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
/*int pw(ll a,ll b){
if ( b== 0){
    return 1;}
    if(b%2==0){
      int val =  pw(a,b/2);
        return val * val;
    }else{
        return a*pw(a,b-1);
    }
}*/
int main()
{
    fast;
    ll n,m;
    cin>>n>>m;
    ll x = pow(2,n);
   cout<<m%x<<nl;
}


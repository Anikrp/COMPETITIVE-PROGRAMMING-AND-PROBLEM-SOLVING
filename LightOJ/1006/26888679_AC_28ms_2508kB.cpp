#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d: ",ca)
using namespace std;
ll ca=1;
ll n;
ll x = 1e7+7;
ll a, b, c, d, e, f;

ll arr[10000+1];
ll fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(arr[n] != -1){
        return arr[n];
    }else{
    arr[n]=(fn(n-1)+fn(n-2)+fn(n-3)+fn(n-4)+fn(n-5)+fn(n-6))%x;
    return  arr[n];
    }
}
int main() {
    ll t;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f,&n);
        memset(arr,-1,sizeof(arr));
        pcase;
        ll num=fn(n);
        printf("%lld\n",num%x);
        ca++;
    }
}

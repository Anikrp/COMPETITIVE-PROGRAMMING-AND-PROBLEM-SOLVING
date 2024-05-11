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
void fn( int n ) {
    arr[0]=a,arr[1]=b,arr[2]=c,arr[3]=d,arr[4]=e,arr[5]=f;
    for(int i = 6;i<=n;i++){
        arr[i] =(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%x;
    }
}
int main() {
    ll t;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f,&n);
        memset(arr,-1,sizeof(arr));
        pcase;
        fn(n);
        printf("%lld\n",arr[n]%x);
        ca++;
    }
}

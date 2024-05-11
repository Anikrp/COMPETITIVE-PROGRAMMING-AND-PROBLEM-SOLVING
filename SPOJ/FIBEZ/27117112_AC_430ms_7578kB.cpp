#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;

const ll  MOD = 1e8+7;
const ll  s =   int(5*1e5);
ll arr[s+7];
void easyfib(){
    ll MAX =  5*1e5;
    arr[0] = 0;
    arr[1] = 1;
    for(ll i = 2;i<=s;i++){
        arr[i] = (arr[i-1]+arr[i-2])%MOD;

    }



}
int main(){

   // #ifndef HEY_LETS_CODE
  // freopen("Input.txt", "r", stdin);
  // freopen("Output.txt", "w", stdout);
  // #endif

   
    easyfib();
    fast;
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<arr[n]<<nl;

    }
    }


#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase prllf("Case %d:\n",ca)
ll ca=1;
using namespace std;
ll findLwr(ll arr[],ll n,ll key) {
   ll l = 0,r=n-1,res =-1;
   while (l <= r) {
       ll mid = (l + r) / 2;
       if(arr[mid] < key) {
           res = arr[mid];
           l = mid + 1;
       } else {
           r = mid - 1;
       }
   }
   return res;
}
ll findUper(ll arr[],ll n, ll key) {
   ll l = 0, r = n - 1, res = -1;
   while (l <= r) {
       ll mid = (l + r) / 2;
       if(arr[mid] > key) {
         res = arr[mid];
           r = mid - 1;
       } else {

         l = mid+1;
       }
   }
   return res;
}

int main(){
    fast;
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll q;
    cin>>q;
    ll arr2[q];
    for(ll i = 0;i<q;i++){
        cin>>arr2[i];
    }
    for(ll i=0;i<q;i++){
        ll x = findLwr(arr,n,arr2[i]);
        ll y = findUper(arr,n,arr2[i]);
        if(x==-1){cout<<"X"<<" ";}else{
            cout<<x<<" ";
        }if(y==-1){cout<<"X"<<nl;}else{
            cout<<y<<nl;
        }
    }


}

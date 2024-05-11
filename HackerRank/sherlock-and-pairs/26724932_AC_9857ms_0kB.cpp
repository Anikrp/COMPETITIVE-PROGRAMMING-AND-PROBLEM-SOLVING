#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d: ",ca)

using namespace std;
int main(){
    //fast;
    int t;
    cin>>t;

    while(t--){
            ll n ;
            cin>>n;
            ll arr[n];
            map<ll,ll>m;
        for(ll i = 0;i<n;i++){
            cin>>arr[i];
            m[arr[i]]++;

        }
        ll sum=0;


           for(auto i = m.begin();i!=m.end();i++){
           if((*i).second>1){
           sum+=(*i).second*((*i).second-1);}


           }
         cout<<sum<<nl;
           }


}

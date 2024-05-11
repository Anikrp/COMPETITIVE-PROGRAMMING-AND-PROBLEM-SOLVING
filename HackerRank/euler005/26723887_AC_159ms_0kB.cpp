#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d: ",ca)
#define mx 5000009
int n;
using namespace std;
ll dev(ll n){
    ll ans = n;

    while(1){
            bool res = true;
        for(int i =1;i<=n;i++){
            if(ans%i!=0){
                    res = false;
                    ans =ans+n;
                    break;

            }
          }
          if(res== true ){
            break;
          }
    }
    return ans;

}
int main(){
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    cout<<dev(n)<<nl;

    }

}

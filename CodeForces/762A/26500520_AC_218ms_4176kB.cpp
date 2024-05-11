#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
#define mx 5000009
using namespace std;
vector<ll>dv;
int ca=1;
int main(){
   fast;
    ll n,k;
    cin>>n>>k;
    for(ll i = 1;i*i<=n;i++){
        if(n%i == 0){
            dv.push_back(i);

        if(i*i != n){
            dv.push_back(n/i);
        }
}

    }
    sort(dv.begin(),dv.end());
    if(k>dv.size()){
        cout<<-1<<nl;
    }else{
    cout<<dv[k-1]<<nl;
    }

}

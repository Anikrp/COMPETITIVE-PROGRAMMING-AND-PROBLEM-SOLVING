#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
#define mx 100000000
vector<ll> prime;
vector<ll> fact;
vector<ll>pw;
bool vis[mx+1];

void sieve(){
    for(int i = 3;i*i<mx;i+=2){
        if(vis[i] == 0){
        for(int j = i*i;j<mx;j+=2*i)
            vis[j] = 1;
            }
    }

    prime.push_back(2);
    for(int i = 3;i<mx;i+=2){
        if(vis[i] == 0){
            prime.push_back(i);
        }
    }
}

void factorize(ll n ){
    ll sq = sqrt(n);
    for(int i= 0;i<prime.size() && prime[i]<= sq;i++){
            int p = 0;
        while(n%prime[i] == 0){
            n/= prime[i];
            p++;
        }

    if(p!=0){
            fact.push_back(prime[i]);
            pw.push_back(p);}
        sq = sqrt(n);
    }
    if(n!= 1){
        fact.push_back(n);
        pw.push_back(1);
    }
}
int main(){
    fast;
    sieve();
    while(1){
    ll a;
    cin>>a;
    if(a==0){break;}
    factorize(a);



    for(int i =0;i<fact.size();i++){
        cout<<fact[i]<<"^"<<pw[i]<<" ";

    }

    fact.clear();
    pw.clear();
    cout<<nl;
    }


}

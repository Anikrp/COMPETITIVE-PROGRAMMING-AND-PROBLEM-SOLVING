#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d: ",ca)
#define mx 5000009
int ca=1;
using namespace std;

ll gcd(ll a,ll b){
    if(b == 0){
    return a;}
    return gcd(b,a%b);

}

int main(){
    int T;
    cin>>T;
    while(T--){
    ll x,y;
   cin>>x>>y;
   if(gcd(x,y)==x){
     cout<<x<<" "<<y<<nl;
   }else{
   cout<<-1<<nl;
   }

}


}

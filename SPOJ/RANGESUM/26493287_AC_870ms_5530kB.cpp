#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
#define S 100000000
using namespace std;
int ca=1;
ll arr[S+5];
//1 2 3 4 5
//15 14 12 9 5

ll getsum(ll i ,ll j,ll n){
    //cout<<i<<"   "<<j<<nl;

    if(j>1){
        return (arr[i-1]-arr[j-2]);
    }else{
    return arr[i-1];
    }
}
int main(){
    //fast;
    int n ;
    cin>>n;
    ll arr2[n];
    for(int i = 0;i<n;i++){
        cin>>arr2[i];
    }
    ll j  = 1;
    arr[0]= arr2[n-1];
    for(int i = n-2;i>=0;i--){
            arr2[i]+=arr2[i+1];
            arr[j] = arr2[i];
           j++;

    }

    ll q;
    cin>>q;
    while(q--)
    {
        ll x,y,val;
        cin>>x;
        if(x==2){
            cin>>val;
          arr[j]=(arr[j-1]+val);
          j++;

        }else{
            ll r ,l;
        cin>>l>>r;
        cout<<getsum(j-l+1,j-r+1,j)<<nl;}
}


}

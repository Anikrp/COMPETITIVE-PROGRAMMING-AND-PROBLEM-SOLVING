#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
int main()
{
    ll a,b,d;
    cin>>a>>b>>d;
    ll arr[a*b];
    for(ll i = 0;i<a*b;i++){
        cin>>arr[i];
    }
    ll sum = 0;
    sort(arr,arr+(a*b));
    for(ll i=0;i<(a*b);i++){
        sum += abs(arr[i] - arr[(a*b)/2]);
    }
    if (sum%d==0)cout<<sum/d<<nl;
    else{
        cout <<-1<<nl;
    }

}



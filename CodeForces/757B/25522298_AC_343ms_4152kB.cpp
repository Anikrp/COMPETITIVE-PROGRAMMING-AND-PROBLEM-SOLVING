#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;
int main()
{
    ll n ,maxi=1,mx = 0;

    cin >> n ;

    map <ll,ll> mp ;

    for(ll i =0;i<n;i++)
    {
        ll a;

        cin>>a;

        mp[a]++;

        if (a>mx) mx = a ;
    }

    for(ll i=2;i <=mx;i++)
    {
        ll cnt = 0 ;

        for(ll j = i;j <= mx;j += i)
        {
            cnt += mp[j];
        }

        maxi = max(cnt,maxi);
    }

    cout<<maxi<<endl;

    return 0;
}
//ANIK;

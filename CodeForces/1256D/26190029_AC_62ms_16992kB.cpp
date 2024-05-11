#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
int main() {
    fast;
    int t;
    cin >> t;

    while(t--) {
        ll n, left;
        string str;
        cin >> n >> left >> str;

        ll j = 0;
        vector<ll> v;
        for (auto i: str) {
            if (i == '0')v.push_back(j);
            j++;
        }

        ll ans = 0;
        for (auto i: v) {
            if (left == 0) break;
            ll mx = min(left, i - ans);
            str[i] = '1';
            str[i - mx] = '0';
            left -= mx;
            ans++;
        }

        cout <<str<<nl;
    }

}

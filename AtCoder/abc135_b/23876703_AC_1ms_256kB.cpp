#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main(void) {
    int n; cin >> n;
    vector<int> p(n+1);
    int cnt = 0;
    rep(i,n) {
        cin >> p[i+1];
        if(i+1 != p[i+1]) cnt++;
    }
    if(cnt<=2) cout <<"YES";
    else cout <<"NO";
}
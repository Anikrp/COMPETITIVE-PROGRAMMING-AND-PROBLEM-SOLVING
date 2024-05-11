#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int T, n;
string s;
int main() {
    cin >> T;
    while (T--) {
        cin >> s;
        int l = 0, r = s.size()-1;
 
        while (s[l] == '0') l++;
        while (s[r] == '0') r--;
        int ans = 0;
        for (int i = l; i <= r; i++)
            if (s[i] == '0') ans++;
        cout << ans << endl;
    }
    return 0;
}
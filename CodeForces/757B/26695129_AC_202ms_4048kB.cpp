#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d: ",ca)
#define mx 5000009
using namespace std;
int ca=1;
const int N = 100005;
int n, f[N];
int main(){
    cin >> n;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		for (int j = 2; j*j <= x; ++j) {
			if (x % j == 0) ++f[j];
			while (x % j == 0) x /= j;
		}
		if (x>1) ++f[x];
	}

	int result = 1;
	for (int i = 0; i < N; ++i) {
		result = max(result, f[i]);
	}

	cout<<result<<nl;

}

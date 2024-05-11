#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)

using namespace std;
const int N = 100005;

int n, f[N];

int main() {
	fast;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		for (int j = 2; j*j <= x; ++j) {
			if (x % j == 0) ++f[j];
			while (x % j == 0) x /= j;
		}
		if (x > 1) ++f[x];
	}

	int result = 1;
	for (int i = 0; i < N; ++i) {
		result = max(result, f[i]);
	}

	cout << result << endl;
	return 0;
}

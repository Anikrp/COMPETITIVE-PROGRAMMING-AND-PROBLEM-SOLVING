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
        fast;
	int n,m,a,b;
	int ans=0;

	cin>>n>>m>>a>>b;
	if (m*a<= b){
		ans = a*n;
	}
	else if(n%m*a<b){
		ans = (n%m*a)+(n/m*b) ;
	}
	else{
		ans =b+(n/m*b);
	}
	cout<<ans<<nl;
}

#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
int main(){
    fast;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int res = 1;
    for(int i=0; i<n; i++) {
		int l=i;
		int r=n-1;
		int ans=i;
		while(l<=r) {
			int mid=(l+r)/2;
			if(arr[mid]-arr[i]<=5){
				ans=mid;
				l=mid+1;
			}
			else{
				r=mid-1;
			}
		}
		res=max(res,ans-i+1);
		}
	cout<<res<<nl;
}



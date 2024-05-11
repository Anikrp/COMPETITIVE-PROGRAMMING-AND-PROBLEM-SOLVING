#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
#define S 100000000
using namespace std;
int ca=1;
int main(){
    fast;
    int n;
    cin>>n;
    int ans = 0;
    int sum[n+1];
    int arr[n+1];
    sum[0] = 0;
    for(int i =1;i<=n;i++){
         cin>>arr[i];
    }
        for(int i =1;i<=n;i++){
         sum[i]=sum[i-1]+arr[i];
    }
    for(int i = 1;i<n;i++){
        if(2*sum[i] == sum[n]){ans++;}
    }
    cout<<ans<<nl;
}

#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
#define s 200000
//int arr[s+5] = {0};
int main(){
    fast;
    int n,m,x;
    cin>>n>>m;
    int arr[n];
    int res[n];
    set<int>a;

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    for(int i = n-1;i>=0;i--){
        a.insert(arr[i]);
        res[i] = a.size();
    }
    for(int i =0;i<m;i++){
        cin>>x;
    cout<<res[x-1]<<nl;
    }


}

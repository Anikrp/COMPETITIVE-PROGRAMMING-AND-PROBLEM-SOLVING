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
    vector<pair<int,int>>v(n);
    for(int i =0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int ans =0;
    for(int i =0;i<n;i++){
        if(v[i].second>=ans){
       ans = v[i].second;
        }else{
            ans = v[i].first;
       }
    }
    cout<<ans<<nl;


}

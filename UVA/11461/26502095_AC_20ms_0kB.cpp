#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
#define mx 5000009
using namespace std;
vector<ll>dv;
int ca=1;
int main(){
    fast;
    int a,b;
    while(1){
    cin>>a>>b;
    int ans = 0;
    if(a==0 && b == 0){break;}

    for(int i =a;i<=b;i++){
            int s = sqrt(i);
        if(i == s*s){
        ans++;}
    }
    cout<<ans<<nl;
    }
}




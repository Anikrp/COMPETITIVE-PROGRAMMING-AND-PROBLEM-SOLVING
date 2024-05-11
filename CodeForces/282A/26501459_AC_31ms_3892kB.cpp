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
    int n ;
    cin>>n;
    int x = n;
    cin.ignore();
    int ans = 0;


   for(int i =0;i<n;i++){
    string a;
        cin>>a;
    if(a[1]=='+'){
        ans++;
    }else if(a[1]=='-'){
    ans--;
    }
    }
    cout<<ans<<nl;

}




#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d: ",ca)
int ca =1;
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        ll n, ans=0;
        cin>>n;
        string a="";
          while(n) {
           a+=n%2+'0';
            n=n/2;
        }
        a+='0';
        reverse(a.begin(),a.end());
        next_permutation(a.begin(),a.end());
        for(ll j=0;j<a.length();j++){
            ans=ans*2+a[j]-'0';
            }
            pcase;
            ca++;
    cout<<ans<<nl;
    }
}




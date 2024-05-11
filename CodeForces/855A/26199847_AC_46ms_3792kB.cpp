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
    int n;
    cin>>n;
    map<string,int>m;
    while(n--){
            string a;
            cin>>a;
            m[a]++;
            if(m[a]>1){
                cout<<"YES"<<nl;
                m[a]--;
            }else{
            cout<<"NO"<<nl;}

    }
}

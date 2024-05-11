#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        set<int>s;
        int n;
        cin>>n;
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);

        }
        cout<<s.size()<<nl;
    }

}
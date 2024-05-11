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
    int t;
    cin>>t;
    while(t--){
            int sum = 0;
        int a,b;
        cin>>a>>b;
        int m = __gcd(a,b);
        for(int i =1;i*i<=m;i++){
                if(i*i==m){
                    sum++;
                }
            else if(m%i == 0){
                    sum+=2;
                }
        }

        cout<<sum <<nl;
    }
}

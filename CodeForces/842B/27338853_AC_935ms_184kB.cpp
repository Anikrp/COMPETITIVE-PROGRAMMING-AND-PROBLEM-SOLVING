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
    double r,d;
    cin>>r>>d;
    int n;
    cin>>n;
    double cr = r-d;
    int ans = 0;
    for(int i =0;i<n;i++){
        double x,y,z;
        cin>>x>>y>>z;
        x=abs(x);
        y = abs(y);
        z = abs(z);
        double a = sqrt(x*x + y*y);
        if(a+z<=r){
            if(a>=z+cr){
                ans++;
            }
}
        }



       cout<<ans<<nl;

}

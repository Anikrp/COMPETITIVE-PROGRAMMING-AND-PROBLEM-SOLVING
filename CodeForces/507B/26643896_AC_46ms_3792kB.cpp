#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
#define mx 5000009
int ca=1;
using namespace std;
int main(){

    double r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    cout<<ceil((sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1)))/(r+r))<<nl;
}

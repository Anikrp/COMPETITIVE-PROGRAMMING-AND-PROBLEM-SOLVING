#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi 2 * acos (0.0)
#define pcase printf("Case %d: ",ca)
#define eps (10e-9)+1
int ca=1;
double arr[1000005];
using namespace std;

int main(){
    arr[0] = 0;
     for(int i=1;i<=1e6;i++){
       arr[i]=arr[i-1]+log10(i);
    }
    int t;
    cin>>t;
    while(t--){
        int n,b;
       cin>>n>>b;
        pcase;
        ca++;
        ll res = (arr[n]/log10(b))+1;
        cout<<res<<nl;

    }


}

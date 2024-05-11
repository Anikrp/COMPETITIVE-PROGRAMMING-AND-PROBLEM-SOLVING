#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
int n ;
ll psum[(int)1e5+50];
void buildPsum(){
    for(int i = 1;i<n;i++){
      psum[i] +=  psum[i-1];
    }
}
int getsum(int i,int j){
    int sum = psum[j];
    if(i>0) return sum-=psum[i-1];
    return sum;
}
int main(){

    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>psum[i];
    }

    buildPsum();
    int t;
    cin>>t;
    while(t--){
        int i ,j;
        cin>>i>>j;
        cout<<getsum(i,j)<<nl;
    }


}


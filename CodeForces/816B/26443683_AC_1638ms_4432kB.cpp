#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
#define s 200000
int arr[s+5] = {0};
int main(){
    int n,k,q;
      int x,y;

    cin>>n>>k>>q;
    for(int i = 0;i<n;i++){
        cin>>x>>y;
        arr[x]++;
        arr[y+1]--;
    }
    for(int i = 1;i<=s;i++){
        arr[i]+=arr[i-1];}
    for(int i = 0;i<=s;i++){
            if(arr[i]>=k){
        arr[i]= 1;}
        else{
            arr[i] = 0;
        }
    }
           for(int i = 1;i<=s;i++){
        arr[i]+=arr[i-1];}
    while(q--){
        cin>>x>>y;
        cout<<arr[y]-arr[x-1]<<nl;
    }


}

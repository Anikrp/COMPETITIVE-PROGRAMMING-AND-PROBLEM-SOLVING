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
    string a;
    int n;
    cin>>n;
    cin.ignore();
    cin>>a;
    int sum =0;
    for(int i =0;i<n-1;i++){
        if(a[i]==a[i+1]){
            sum++;
        }
    }
    cout<<sum<<nl;



}

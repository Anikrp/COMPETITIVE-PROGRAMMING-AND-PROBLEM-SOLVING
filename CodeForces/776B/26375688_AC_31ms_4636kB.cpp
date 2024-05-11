#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
#define m 1000000
bool prime[m+1];

void sieve(){
    for(int i = 2;i<=m;i++){
        prime[i] = 1;
    }
    for(int i =2;i*i<=m;i++)
    {
        if(prime[i])
            {
            for(int j = i*i;j<=m;j+=i){
                prime[j] =0;}
            }
    }
}



int  main(){
    fast;
    sieve();
    int n ;
    cin>>n;

    if(n<=2){
        cout<<1<<nl;
    }else{
    cout<<2<<nl;
    }

    for(int i = 2;i<=n+1;i++){
            if(prime[i]){
                cout<<1<<" ";
            }else{
            cout<<2<<" ";
            }
    }
    cout<<nl;
}

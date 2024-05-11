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

    int n ,x, y;
    cin>>n>>x>>y;

    int sum = abs(y);
    if(y<0)
    {
        y = abs(y);
        while(sum--){
          --x;
          if(x==0){
            x=n;
          }
        }
          cout<<x<<nl;
    }else{
            while(sum--){
                x++;
          if(x==n+1){
            x=1;
          }

    }
    cout<<x<<nl;
    }
}




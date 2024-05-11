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
            pcase;
            ca++;
            ll n ;
            cin>>n;
            stack<ll>x,y;
            y.push(0);
            while(n--){
               char a;
               ll m;
              cin>>a;
               if(a == 'A'){
                   cin>>m;
                   x.push(m);
                   if(y.top()<m){
                    y.push(m);
                   }else{
                       y.push(y.top());
                   }

               }
                else if(a == 'R'){
                    if(!x.empty()){
                            x.pop();

                        }
                        if(y.size()>1){
                             y.pop();
                        }
                }
                    else if (a=='Q'){
                        if(y.size()>1){
                            printf("%lld\n",y.top());}
                            else{
                         printf("Empty\n");}
                    }
            }

    }


}

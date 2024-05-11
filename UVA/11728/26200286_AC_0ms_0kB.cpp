#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d: ",ca)
int ca=1;
using namespace std;
int n = 1000;
int sumdiv[1001];
void x(){
    for (int i = 1; i <= n; ++i)
 for (int j = i; j <= n; j += i)
  sumdiv[j] += i;
}
int main()
{
    x();
    fast;
    int n;
    while(cin>>n && n){

            int ans = -1;

                for(int i=1;i<=n;i++){
                    if(sumdiv[i]==n){
                           // cout<<sumdiv[i]<<" ";
                        ans = i;


                    }
                }
               // cout<<nl;



            printf("Case %d: %d\n",ca,ans);
            ca++;


    }
}

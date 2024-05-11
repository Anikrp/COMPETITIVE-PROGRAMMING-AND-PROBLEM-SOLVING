#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
 int fib(int n ){
 int n1 = 0,n2 = 1,ans;
        for (int i = 2; i <= n; i++) {
           ans = n1 + n2;
            n1 = n2;
            n2 = ans;
        }
        return ans;
 }
int main(){
    int a,b;
    cin>>a;
    cout<<fib(a)<<nl;

}

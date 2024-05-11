#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
int main(){

   //  #ifndef HEY_LETS_CODE
   // freopen("Input.txt", "r", stdin);
   // freopen("Output.txt", "w", stdout);
   // #endif
   fast;
   int a;
   cin>>a;
   set<int>s;
   for(int i = 0;i<a;i++){
    int x;
    cin>>x;
    s.insert(x);
   }
   if(s.size()==a){
    cout<<"YES"<<nl;
   }else{

       cout<<"NO"<<nl;
   }

}


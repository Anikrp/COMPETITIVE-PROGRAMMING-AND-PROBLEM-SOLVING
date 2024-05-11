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

  int l =0, p=0;
  string a;
  cin>>a;

  for(int i = 0;i<a.size();i++){
    if(a[i] == '-'){
        l++;
    }else{
    p++;
    }
  }
  if(p==0){cout<<"YES"<<nl;}
  else if(l%p==0){
  cout<<"YES"<<nl;
  }else{cout<<"NO"<<nl;}

}

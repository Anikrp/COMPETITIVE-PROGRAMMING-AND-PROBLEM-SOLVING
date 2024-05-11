#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
int main(){
    string a;
    cin>>a;
    bool ans = false;
    for(int i =0;i<3;i++){
        if(a[i]-'0'==7){
            ans = true;
        }
    }
    if(ans == true){
        cout<<"Yes"<<nl;
    }else{
    cout<<"No"<<nl;}
}

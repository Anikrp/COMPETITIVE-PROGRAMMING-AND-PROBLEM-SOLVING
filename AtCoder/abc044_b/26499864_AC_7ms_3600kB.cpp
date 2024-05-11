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
    string a;
    cin>>a;
    map<char,int>m;
    for(int i =0;i<a.size();i++){
        m[a[i]]++;
    }
    bool ans = true;
    for(auto i:m){
        if(i.second%2 !=0){
            ans = false;
            cout<<"No"<<nl;
            return 0;
   }
    }
    cout<<"Yes"<<nl;

}

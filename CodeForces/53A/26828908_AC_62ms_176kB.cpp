#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
int main(){
    while(1){
    string a;
    cin>>a;
    int n;
    cin>>n;
    cin.ignore();
    string s[n];
    for(int i = 0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);
    for(int i = 0;i<n;i++){
            string ans ;
            for(int j = 0;j<a.size();j++){
            ans = ans+s[i][j];
            }
            if(a==ans){
            cout<<s[i]<<nl;
            return 0;
            }

        }


    cout<<a<<nl;
    }
}



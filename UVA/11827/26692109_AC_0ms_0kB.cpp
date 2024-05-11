#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
#define mx 5000009
int ca=1;
using namespace std;

int gcd(int a,int b){
    if(b == 0){
    return a;}
    return gcd(b,a%b);

}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
    vector<int>v;
    string a;
    getline(cin,a);
    stringstream an(a);
    int n ;
    while(an >> n){
        v.push_back(n);
    }
    int m = 0;
    for(int i =0;i<v.size();i++){
        for(int j = i+1;j<v.size();j++){
            if(gcd(v[i],v[j])>m){

                m=gcd(v[i],v[j]);

            }
        }
    }
    cout<<m<<nl;

    }
}





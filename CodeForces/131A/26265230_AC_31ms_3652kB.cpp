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
    int i,cnt=0;
    for(i=0;i<a.length();i++){
            if(isupper(a[i])){
        cnt++;}
        }
        if(cnt==a.size()||(cnt==(a.size()-1)&&a[0]>='a'&&a[0]<='z')){
                for(i=0;i<a.size();i++){
                    if(isupper(a[i])){
        a[i]=tolower(a[i]);}
        else{
        a[i]=toupper(a[i]);}}
    cout<<a<<nl;
        }
        else
            cout<<a<<nl;
}

#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;

int main(){
    string a,b;
    cin>>a;
    cin>>b;
    if(a.size()>b.size()){
        cout<<"GREATER"<<nl;
    }else if(b.size()>a.size()){
        cout<<"LESS"<<nl;
    }else{
    for(int i =0;i<a.size();i++){
        if(a[i]>b[i]){
            cout<<"GREATER"<<nl;
            
            return 0;
        }else if(a[i]<b[i]){
            cout<<"LESS"<<nl;
            return 0;
        }

    }
    cout<<"EQUAL"<<nl;
}
  
} 
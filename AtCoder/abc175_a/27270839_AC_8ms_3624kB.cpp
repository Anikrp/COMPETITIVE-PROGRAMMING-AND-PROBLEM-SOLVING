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
    int r = 0;
    int x = 0;
    for(int i =0;i<a.size();i++){
        if(a[i]=='R'){
            x++;
            for(int j = i+1;j<a.size();j++){
                if(a[j]=='R'){
                    x++;

                }else{
                    break;
                }

            }
            r = max(x,r);
        }
        x=0;

    }
    cout<<r<<nl;
  
} 
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
    while(cin>>a){
        pcase;
        ca++;
    int n;
    cin>>n;
    while(n--){
        int A , B;
        cin>>A>>B;
        int x = min(A,B);
        int y = max(A,B);
        int no = 1;
        for(int i = x;i<=y;i++){
            if(a[x]!=a[i]){
                cout<<"No"<<nl;
                no = 0;
                break;
            }

        }if(no==1){
            cout<<"Yes"<<nl;
        }
    }

    }
}
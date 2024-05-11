#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
        string a;
        cin>>a;
        if(t<4){cout<<a;}
        else{
        int l = a.size();
        if(l%2==0){
            for(int i =0;i<l;i++){
                cout<<a[i];
                if((i+1)%2==0 && i!=l-1){cout<<"-";}
            }
        }else if(l%3==0){
            for(int i =0;i<l;i++){
                cout<<a[i];
                if((i+1)%3==0 && i!=l-1){cout<<"-";}
            }
        }
        else{
            cout<<a[0]<<a[1]<<a[2]<<"-";
              for(int i =3;i<l;i++){
                cout<<a[i];
                if((i)%2==0 && i!=l-1){cout<<"-";}
            }
        }
        }
        cout<<nl;



}

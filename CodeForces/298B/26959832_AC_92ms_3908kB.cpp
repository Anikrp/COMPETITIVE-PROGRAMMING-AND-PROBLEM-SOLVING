#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
int main(){
        int t,x,y,x2,y2;
        cin>>t>>x>>y>>x2>>y2;
        cin.ignore();
        string a;
        cin>>a;
        x = (x2-x);
        y = y2-y;
        for(int i = 0;i<t;i++){
                if(x>0 && a[i]=='E'){
                    --x;
                }else if(x<0 && a[i]=='W'){
                    ++x;
                }if(y>0 && a[i] == 'N'){
                --y;}else if(y<0 && a[i] == 'S'){
                ++y;
                }
   if(x==0 && y == 0){
    cout<<i+1<<nl;
    return 0;
   }
   }
   cout<<-1<<nl;;
}



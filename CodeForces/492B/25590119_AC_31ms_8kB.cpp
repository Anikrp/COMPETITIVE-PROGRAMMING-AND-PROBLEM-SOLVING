#include<bits/stdc++.h>
using namespace std;
int main(){
       int n,l,i,mx=0,s;
       double ans;
       cin>>n>>l;
       int ara[n+2];
       ara[0]=0;
       for(i=1;i<=n;i++) cin>>ara[i];
            ara[n+1]=l;
            sort(ara,ara+n+2);
       for(i=1;i<n+2;i++){
            s=ara[i]-ara[i-1];
            if(s>mx) mx=s;}
            ans=(double)mx/2;
            if(ans<ara[1]) ans=ara[1];
            s=ara[n+1]-ara[n];
            if(ans<s) ans=s;
            printf("%.10f",ans);
            return 0;
}
///ANIK

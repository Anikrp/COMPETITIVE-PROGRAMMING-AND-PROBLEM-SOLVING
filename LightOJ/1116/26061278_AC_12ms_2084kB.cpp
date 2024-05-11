#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define pcase printf("Case %d: ",c)
using namespace std;
int main(){
    int t,c=1;
    cin>>t;
    while(t--)
    {
 
 
        ll n;
       scanf("%lld",&n);
        pcase;
        c++;
        ll a=0,b=0;
        if(n%2!=0){printf("Impossible\n");}
        else
        {
  
            for(int i =2;i<=n/2;i+=2){
                if(n%i==0){
 
                    if(i%2==0&&(n/i)%2!=0){
                        a = n/i;
                        b = i;
                      //
                        break;
                    }
                    else if(i%2!=0&&(n/i)%2==0){
                        b = n/i;
                        a = i;
                        cout<<a<<b<<endl;
                        break;
                    }
                }
            }
            if(a!=0&&b!=0){
                 printf("%lld %lld\n",a,b);
            }
            else
            {printf("Impossible\n");}
        }
    }
}
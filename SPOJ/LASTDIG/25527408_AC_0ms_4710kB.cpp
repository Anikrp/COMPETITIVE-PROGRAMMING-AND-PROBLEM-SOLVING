#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
        {
            ll a,b,ans;
            cin>>a>>b;
            if(a==0 && b>0) ans = 0;
            else if(a>0&&b==0) ans = 1;
            else
            {
                if(b%4==0)
            {
                b=4;
            }
            else{
                b=b%4;
            }
           // ll pow (a,b);
            ans =(pow(a,b));
            }
            cout<<ans%10<<endl;

    }

}

//ANIK;

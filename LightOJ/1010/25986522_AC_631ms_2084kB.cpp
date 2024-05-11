#include<bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
int main()
{
    int t,c = 1;
    cin>>t;
    while(t--)
    {
        int a ,b;
        cin>>a>>b;
        if(a==1 || b == 1){
             cout<<"Case "<<c<<": "<<max(a,b)<<"\n";
        }
        else if(a==2 || b==2)
        {
            int ans=((a*b)/8)*4;
            if((a*b)%8==2)
                ans+=2;
            else if((a*b)%8==6 || (a*b)%8==4)
                ans+=4;
             cout<<"Case "<<c<<": "<<ans<<"\n";
        }
        else
        {
            cout<<"Case "<<c<<": "<<((a*b)+1)/2<<"\n";
        }
         c++;

    }
}

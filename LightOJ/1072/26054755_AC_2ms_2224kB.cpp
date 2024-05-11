#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define pcase printf("Case %d: ",c)
using namespace std;
int main()
{
    int c = 1;
    int t;
    cin>>t;
    while(t--){
        double R, r;
        cin>>R>>r;
        double x = ((360/(2*r))*pi)/180;
        double theta = sin(x);
        pcase;
        c++;
        int ans = int((R*theta)/(1+theta));
        if(ans - ((R*theta)/(1+theta))==0){
            cout<<ans<<endl;
        }else{

       printf("%.10lf\n",(R*theta)/(1+theta));
        }
    }

}

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
    int t,ans = 0;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string a;
        char x[1000];
        int age;
        cin>>x;
        a = string(x);
        if(isdigit(a[0])){
            age = atoi(x);
            if(age<18) ans++;
        }
        else{
            if(a=="ABSINTH"||a=="BRANDY"||a=="BEER"||a=="CHAMPAGNE"||a=="WINE"||a=="GIN"||a=="RUM"||a=="SAKE"||a=="TEQUILA"||a=="VODKA"||a=="WHISKEY"){
            ans++;}
        }



    }
    cout<<ans<<nl;
}

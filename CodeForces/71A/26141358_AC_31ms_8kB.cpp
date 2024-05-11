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

    while(t--)
    {
        string a;
        cin>>a;
        int l = a.size();
        --l;
        int x = l-1;
        if(a.size()>10){

            cout<<a[0]<<x<<a[l]<<nl;
        }else{
            cout<<a<<nl;
        }


    }
}

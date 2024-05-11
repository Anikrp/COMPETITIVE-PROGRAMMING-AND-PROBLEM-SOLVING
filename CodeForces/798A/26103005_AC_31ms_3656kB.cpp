#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define pcase printf("Case %d: ",c)
using namespace std;
int main()
{
    int n,j,x=0;
    string s,s2;
    cin>>s;
    n = s.length();

    for (int i = n-1,j=0;j<n;i--,j++) {
        s2[j] = s[i];
    }
    for (int i=0; i<n; i++) {
        if (s[i] != s2[i]){
                x++;
        }

    }
    if (x==2||(x==0 &&n%2!=0)){
        cout<<"YES\n";}
    else{
        cout<<"NO\n";
}
}

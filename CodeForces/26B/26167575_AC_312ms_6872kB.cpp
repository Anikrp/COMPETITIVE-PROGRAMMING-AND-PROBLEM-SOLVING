#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
int arr[10000];
int prime[1000001];
using namespace std;
int main()
{
    int one = 0,two = 0;
    string a;
    cin>>a;
    int c=0,x=1;
    for(int i =0;i<a.size();i++){
        if(a[i]==')'&&c>0){
            one++;
            c--;
        }
     if(a[i]=='('){
            c++;
        }
    }
        cout<<one*2<<nl;


}

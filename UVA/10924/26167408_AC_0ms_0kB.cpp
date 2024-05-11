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
void sieve(){
    int m = 1000000;
    prime[0]=prime[1]=1;
    for(int i = 2;i<=m;i++){
        prime[i] = 1;
    }
    for(int i =2;i*i<=m;i++)
    {
        if(prime[i])
            {
            for(int j = i*i;j<=m;j+=i){
                prime[j] =0;}
            }
    }
}
int main()
{
    sieve();
    char a[100];
  while(scanf("%s",&a)!=EOF){
            ll sum=0;
            for(ll i= 0;i<strlen(a);i++){
                if(a[i]>='A'&&a[i]<='Z'){
                    sum = sum+a[i]-38;
                }else{
                   // cout<<a[i]<<nl;
                    sum = sum+a[i]-96;
                }
            }
            if(prime[sum]){
                    cout<<"It is a prime word."<<nl;
                }else{
                    cout<<"It is not a prime word."<<nl;

                }
    }


}

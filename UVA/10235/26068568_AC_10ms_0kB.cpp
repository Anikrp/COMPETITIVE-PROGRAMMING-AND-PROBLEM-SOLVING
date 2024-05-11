#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define pcase printf("Case %d: ",c)
using namespace std;
int prime(ll n){
    if(n==1){return 0;}
    if(n==2){return 1;}
    int sq = sqrt(n);
    for(int i = 2;i<=sq;i++){
        if(n%i==0){return 0;}
    }
    return 1;
}
int main()
{
   ll n,as;
   while(cin>>n){
        as = n;
        if(n%2==0&&n>2){
            cout<<as<<" is not prime."<<endl;
        }
        else{
                if(prime(n)==1){
                    int s=0,j=0;
                    int i =1;
                    while(n>0){
                        s=(n%10)+s*10;
                        n=n/10;

                    }
                    if(prime(s)==1&& s!=as){cout<<as<<" is emirp."<<endl;}
                    else
                    {
                        cout<<as<<" is prime."<<endl;}
                        }else{
                cout<<as<<" is not prime."<<endl;}


        }

   }
}



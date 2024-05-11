#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
#define mx 5000009
int ca=1;
using namespace std;

int main(){
    while(1){
         ll a,b;
         cin>>a>>b;
         if(a==0 && b == 0){
            break;
         }else{
             int car=0, sum = 0;
             while(a!=0 || b!=0){
                sum +=a%10 + b%10;
                a=a/10;
                b= b/10;

                if(sum >=10){
                    car++;
                    sum = 1;
                }else{
                sum = 0;}
             }
             if(car == 0){
                cout<<"No carry operation."<<nl;
             }else if(car>1){
             cout<<car<<" carry operations."<<nl;
         }else{
             cout<<car<<" carry operation."<<nl;

         }

}
}
}

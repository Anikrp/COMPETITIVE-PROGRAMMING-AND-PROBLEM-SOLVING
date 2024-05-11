#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
#define mx 5000009
int ca=1;
using namespace std;
int gcd(int a, int b){
    if(b == 0){
        return a;
    }return gcd(b,a%b);

}
int main(){
    while(1){
            int N;
        cin>>N;
        if(N==0){
            break;
        }else{

   int G=0;
   for(int i=1;i<N;i++)
    for(int j=i+1;j<=N;j++){
        G+=gcd(i,j);
    }
   cout<<G<<nl;}
}
}




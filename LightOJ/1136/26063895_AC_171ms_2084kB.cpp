#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define pcase printf("Case %d: ",c)
using namespace std;
int main(){
    int t,c=1;
    cin>>t;

    while(t--)
    {
      ll a,b;
      cin>>a>>b;
      --a;
      ll dev;
      ll dev2;
      if(a%3==2){ dev = (2*(a/3))+1;}
      else{
        dev = (a/3)*2;}

        if(b%3==2){dev2 = (2*(b/3))+1;}
      else{
        dev2 = (b/3)*2;}

        pcase;
        c++;
        cout<<(dev2-dev)<<endl;


}
}

#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pcase printf("Case %d: ",x)
using namespace std;
#include<stdio.h>
int main()
{
    //FAST;
    int t;
    cin>>t;
    int x =1;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        int flag = 0;
            if(c*c == a*a + b*b){flag = 1;}
            else if(a*a == c*c + b*b){flag = 1;}
            else if(b*b == a*a + c*c){flag =1;}
        pcase;
        x++;
        if(flag == 1){
        cout<<"yes"<<endl;}
        else{
                cout<<"no"<<endl;

        }

    }
}

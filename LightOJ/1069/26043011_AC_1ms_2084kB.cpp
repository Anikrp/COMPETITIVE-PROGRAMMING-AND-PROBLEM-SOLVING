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
        int a,b,c;
        cin>>a>>b;
        int ex = 19;
        int my = abs(a-b);
       pcase;
       x++;
       cout<<my*4+(a* 4)+ex<<endl;


    }
}

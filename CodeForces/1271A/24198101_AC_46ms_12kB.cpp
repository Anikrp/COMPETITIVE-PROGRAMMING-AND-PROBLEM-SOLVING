#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int x,y,sum1,sum2;
    x=min(a,d);
    y=min(b,min(c,d-x));
    sum1=e*x+f*y;
    y=min(b,min(c,d));
    x=min(a,d-y);
    sum2=e*x+f*y;
    cout<<max(sum1,sum2);
}


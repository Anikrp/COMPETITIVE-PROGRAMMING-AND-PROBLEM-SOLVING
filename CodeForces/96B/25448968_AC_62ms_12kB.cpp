#include <bits/stdc++.h>
using namespace std;

int main(){
    long long in;
    cin>>in;
    int bit=0;
    for(long long t = in; t; bit++, t/=10);
    long long i;
    int j;
    for (i = 0; i < ((long long)1<<(bit)); i++){
        long long now = 0;
        int n7=0, n4=0;
        for (j = bit-1; j>=0; j--)
            if(((long long)1<<j)&i){
                now=now*10+7;
                n7++;
            }
            else{
                now=now*10+4;
                n4++;
            }
        if(n7==n4 && now>=in){
            cout<<now;
            break;
        }
    }
    if(i>=((long long)1<<bit)){
        for (i = 1; i<=(bit+2)/2; i++)
            cout<<4;
        for(i=1; i<=(bit+2)/2;i++)
            cout<<7;
    }
    return 0;
}

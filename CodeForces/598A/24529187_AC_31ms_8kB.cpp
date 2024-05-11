#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,i,p,a,b;
    cin>>n;
 
    for(i=1;i<=n;i++){
        cin>>p;
        b=p;
        a=0;
        while(b>1){
            b=b/2;
            a++;}
        p=p*(p+1)/2-pow(2,a+2)+2;
        cout<<p<<endl;
    }
}
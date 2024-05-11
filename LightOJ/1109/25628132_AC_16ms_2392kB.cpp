#include<bits/stdc++.h>
#define ll long long
#define REP(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
int main(){
    int i,j,k=0,t,n,A[100000],b[10000];
    REP(i,1,1000){
    REP(j,1,i){
    if(i%j==0)
    A[i]++;}
    if(A[i]>k)
    k=A[i];}
    k=1;
    REP(i,1,32){
        for(j=1000;j>=1;j--){
                if(A[j]==i){
            b[k]=j;
            k++;
          }
          }
          }
      cin>>t;
      REP(i,1,t)
        {
            cin>>k;
            cout<<"Case "<<i<<": "<< b[k]<<endl;
      }

}
///ANIK
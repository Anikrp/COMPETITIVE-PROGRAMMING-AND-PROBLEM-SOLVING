#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,val,i,j,x,y,flag,m,ans,book,book2;
    while(cin>>n){
            int arr[n];
    for(i=0;i<n;i++){
            cin>>arr[i];}
    sort(arr,arr+n);
    cin>>val;
    for(i=0,flag=0,m=1e6;i<n;i++){
            for(j=i;j<n;j++){
                x=arr[i];
                y=arr[j];
                ans=abs(x-y);
    if(x+y==val&&ans<m){
                book=x;
                book2=y;
                m=ans;}}
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",book,book2);
    }
}
///ANIK

#include<bits/stdc++.h>
using namespace std;
int f(int m){
   int j; 
   for(j=2;j*j<=m;j++){
      if(m%j==0)
         return 0;
   }
   return 1;
}
int main(){
    int a,b,i;
    cin>>a>>b;
    for(i=a+1;;i++){
       if(f(i)==1)
          break;
    }
    if(i==b)
       cout<<"YES"<<endl;
    else
       cout<<"NO"<<endl;
return 0;
}
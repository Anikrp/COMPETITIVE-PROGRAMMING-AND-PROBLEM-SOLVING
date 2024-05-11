#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
int main(){
    stack<int>t5,t50,t100;
    int n;
    cin>>n;
    int arr[n];
    bool ans=true ;
    for(int i=0;i<n;i++){
            cin>>arr[i];
            }
          for(int i=0;i<n;i++){
       if(arr[i]==25){
        t5.push(25);
       }else if(arr[i]==50){
           if(t5.empty()){ans = false;}else{
            t50.push(50);
            t5.pop();
           }

       }else if(arr[i]==100){
           if(t5.size()>=1 && t50.size()>=1 ){
                        t5.pop();
                        t50.pop();

                }
         else if(t5.size()>=3){
                t5.pop();
                t5.pop();
                t5.pop();}

                else{
                    ans = false;
                }
}
}
if(ans == true ){cout<<"YES"<<nl;}else
    cout<<"NO"<<nl;
          }

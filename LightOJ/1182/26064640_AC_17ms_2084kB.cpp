#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define pcase printf("Case %d: ",c)
using namespace std;
int nod(int x){
    int cnt=0;
    while(x>0){
            if(x%2==1){
            cnt++;
            x=x/2;}else{
       x=x/2;
    }
    }
    return cnt;
}
int main(){
    int t,c=1;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int base = nod(n);
        pcase;
        c++;

        if(base%2==0){cout<<"even"<<endl;}
        else{
        cout<<"odd"<<endl;
        }

}
}

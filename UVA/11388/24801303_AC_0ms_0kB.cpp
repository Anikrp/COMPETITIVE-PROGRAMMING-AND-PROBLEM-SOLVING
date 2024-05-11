#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(y%x!=0){
                cout<<"-1"<<endl;
                }else{
            cout<<x<<" "<<y<<endl;
        }
    }


}

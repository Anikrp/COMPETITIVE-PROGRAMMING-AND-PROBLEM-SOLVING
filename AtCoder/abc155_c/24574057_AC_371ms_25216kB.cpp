#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    map<string,int> m;

    cin>>N;
    for(int i=0;i<N;i++){
        cin>>S;
        m[S]++;
    }

    int max=0;
    for(const auto& x:m){
        if(x.second>max){     
            max=x.second;
        }
    }

    for(const auto& x:m){
        if(x.second==max){
            cout<<x.first<<'\n';
        }
    }

}

#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
int main()
{
    fast;
    int n;
    cin>>n;
    stack<int>a;
    while(n--){
            int s;
            cin>>s;
            if(s==1){
                cin>>s;
                a.push(s);
            }else if (s==2 ){
                if(!a.empty()){
                a.pop();}
                }
            else{
                if(a.empty())
            cout<<"Empty!"<<nl;
                else
                cout<<a.top()<<nl;

            }
    }
    }

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
   // fast;
    int n;
    while(true){
            cin>>n;
     if(n==0){break;}
     deque<int>q;
     for(int i =1;i<=n;i++){
        q.push_back(i);
     }
     cout<<"Discarded cards:";
     int ans =1;
     while(q.size()>1){
            if(q.size()>2){
        cout<<" "<<q.front()<<",";
        }
        else{cout<<" "<<q.front();}
        q.pop_front();
        q.push_back(q.front());
        q.pop_front();
     }
     cout<<nl;
    cout<<"Remaining card: "<<q.front()<<nl;

     }
}

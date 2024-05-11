#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca =1;
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        pcase;
        ca++;
        stack<string>s,s2;
        string a,b="http://www.lightoj.com/",c;
        s.push(b);
        int f=1;
        while(cin>>a){

            if(a=="QUIT"){ break;}

            if(a=="VISIT"){
                    cin>>b;
                    cout<<b<<nl;
                    s.push(b);
                    while(!s2.empty())s2.pop();
            }
            else if(a=="BACK"){
               if(s.size()<=1){cout<<"Ignored"<<nl;}
               else{
                    s2.push(s.top());
                    s.pop();
                    cout<<s.top()<<nl;

               }
            }
            else if(a=="FORWARD"){
                     if(s2.size()<1){cout<<"Ignored"<<nl;}
               else{

                    cout<<s2.top()<<nl;
                    s.push(s2.top());
                    s2.pop();}

                    }
        }
}


}
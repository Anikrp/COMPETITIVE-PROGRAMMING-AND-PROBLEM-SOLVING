#include<bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
int main()
{
    int t,c = 1;
    cin>>t;
    while(t--)
    {
        ll n,x,y;
        cin>>n;
       ll p=ceil(sqrt(n));
       ll q= p*p-n;

       if(q<p)
       {
           y=q+1;
           x=p;
       }
       else
       {
           x=2*p-q-1;
           y=p;
       }
       if(p%2!=0)
	       swap(x,y);
	       cout<<"Case "<<c<<": "<<x<<" "<<y<<"\n";
	       c++;

    }
}

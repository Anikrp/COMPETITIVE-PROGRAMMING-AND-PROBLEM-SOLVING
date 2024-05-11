#include<bits/stdc++.h>
#define ll long long

using namespace std;

vector<int>number;

ll int gcd(ll int p,ll int q)
{

    ll int gcd;

    ll int temp;
    while(q!=0){

        temp=q;
        q=p%q;
        p=temp;
    }

    gcd=p;
    return gcd;
}

int main()
{

    ll int n,g,m;
    while((scanf("%lld",&n)==1) and n)
    {


        while(1)
        {
            scanf("%lld",&m);
            if(m==0) break;
            number.push_back(abs(m-n));
            n=m;

        }
g=0;

       for(int i=0;i<number.size();i++)
        {
            g=gcd(g,number[i]);
        }

        printf("%lld\n",g);

        number.clear();
    }

}

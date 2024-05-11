#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int i;
       long long n,sum =0,sum1;
        cin>>n;

        for(i=1;i<=n;i=(i*2))
        {
           sum=sum+i;


        }

        {
            sum1=(n*(n+1))/2;
        }


        cout<<(sum1-sum)-sum<<endl;
        }
 }
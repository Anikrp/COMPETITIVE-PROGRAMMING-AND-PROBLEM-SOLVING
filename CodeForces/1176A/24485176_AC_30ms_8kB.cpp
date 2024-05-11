#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      long long n;int i=0;
        cin>>n;


        while(n>1&&n%2==0||n%3==0||n%5==0){
            if(n%2==0)
            {
                n=n/2;
                i++;
            }
            if(n%3==0)
            {
                n= 2*n/3;
                i++;
            }
            if(n%5==0)
            {
             n=4*n/5;
             i++;
            }
       }



            if(n==1){
                cout<<i<<endl;
            }
            else{
                cout<<"-1"<<endl;}

        }

    }



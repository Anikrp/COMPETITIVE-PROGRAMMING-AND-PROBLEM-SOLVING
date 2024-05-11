#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c = 1;
    cin>>t;
    while(t--)
    {
        int a,b,sum=0;
        cin>>a;
        for(int i = 0;i<a;i++){
        cin>>b;
        if(b>0){
            sum+=b;
       } }

 cout<<"Case "<<c<<": "<<sum<<"\n";


	       c++;

    }
}

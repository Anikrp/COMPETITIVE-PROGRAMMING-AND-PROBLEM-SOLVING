#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i=0,s;

    cin>>a;
    int n[a];
    for(i=0;i<a;i++)
    {
        cin>>n[i];

        }
        sort(n,n+a);
        s=n[a-1]-n[0]+1;





            cout<<s-a;

}

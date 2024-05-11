#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,v;
    cin>>n;
    int a[n],b[n];
    int i;
    string x,y;
    cin.ignore();
 
    cin>>x;
    cin.ignore();
    cin>>y;
    for(i=0;i<n;i++)
    {
        a[i]=x[i]-'0';
        b[i]=y[i]-'0';
    }
 
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
          sum=sum+min(abs(a[i]-b[i]),min(abs(a[i]+10-b[i]),abs(b[i]+10-a[i])));
      
            }
    }
    cout<<sum;
}
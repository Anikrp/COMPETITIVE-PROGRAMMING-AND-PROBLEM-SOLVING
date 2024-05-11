#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    int l1,l2,l;
    cin>>a>>b;
    cin>>x>>y;
    l1=fabs(a-x);
    l2=fabs(b-y);
    if(l1>l2)
    {
        cout<<(l1-l2)+l2;
    }
    else
    {
        cout<<(l2-l1)+l1;
    }
    return 0;
}
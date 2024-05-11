#include <bits/stdc++.h>
using namespace std;
string aa;
long long ar[100009],pr[100009];
int main()
{
    long long a,s,d,f,g,h,j,k,l;
    char ch;
    cin>>a>>s;
    if(s==0)
    {
        if(a==1)
        {
            cout<<"0 0\n";
        }
        else cout<<"-1 -1\n";
        return 0;
    }
    if(a*9<s)
    {
        cout<<"-1 -1\n";
        return 0;
    }
    g=0;
    for(d=1;d<=a;d++)
    {
        if(d==1) f=1;
        else f=0;
        for(;f<=9;f++)
        {
            if(g+(a-d)*9+f>=s)
            {
                ar[d]=f;
                g=g+f;
                break;
            }
        }
    }
    for(d=1;d<=a;d++) cout<<ar[d];
    cout<<" ";
    g=0;
    for(d=1;d<=a;d++)
    {
        for(f=9;f>=0;f--)
        {
            if(g+f<=s)
            {
                ar[d]=f;
                g=g+f;
                break;
            }
        }
    }
    for(d=1;d<=a;d++) cout<<ar[d];
    cout<<endl;
}
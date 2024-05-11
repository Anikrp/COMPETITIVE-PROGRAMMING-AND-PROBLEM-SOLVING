#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j,sum=0;
    cin>>n;
    cin.ignore();
    string a;
    cin>>a;

    for(i=0;i<n-2;i++)
    {

            if(a[i]=='A')
            {
                if(a[i+1]=='B')
                {
                    if(a[i+2]=='C'){
                        sum++;
                    }
                }
        }
    }
    cout<<sum<<endl;
}

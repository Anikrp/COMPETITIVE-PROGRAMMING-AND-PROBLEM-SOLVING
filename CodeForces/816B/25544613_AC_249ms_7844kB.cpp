#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;
const int N=2000010;
int arr[N];
int n,k,q;
int main()
{

    fast;

    int l,r,a,b;
    cin>>n>>k>>q;
     for(int i=0;i<n;i++)
     {  cin>>l>>r;
         arr[l]++;
         arr[r+1]--;
        }
    for(int i=1;i<=N;i++)
        arr[i]+=arr[i-1];
    arr[0]=0;
    for(int i=1;i<=N;i++)
        if (arr[i]>=k)
            arr[i]=arr[i-1]+1;
        else arr[i]=arr[i-1];

    for(int i=0;i<q;i++)
    {   cin>>a>>b;
        cout<<arr[b]-arr[a-1]<<"\n";
    }
    return 0;
}
//ANIK

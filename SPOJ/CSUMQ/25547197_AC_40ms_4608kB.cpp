#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
int main()
{

    int n;
    cin>>n;
    int arr[n];
    int prefsum[n];
    for(int i =0;i<n;i++) {
        cin>>arr[i];
        prefsum[i] = arr[i];
        if(i>0) prefsum[i]+=prefsum[i-1];

    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int x = prefsum[r];
        int y = 0;
        if(l>0)y = prefsum[l-1];
        cout<<x-y<<endl;
    }


}
//ANIK;

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    while(n--)
    {
        int a;
        cin>>a;
        arr.push_back(a);
        }
        int q;
        cin>>q;
        while(q--)
        {
            int i,j;
            cin>>i>>j;
            auto it = arr.begin()+i;
            auto it1 = arr.begin()+j+1;
           cout<<accumulate(it,it1,0)<<endl;
        }


}
//ANIK;

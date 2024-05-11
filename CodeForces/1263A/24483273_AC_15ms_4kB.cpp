#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int c[3],x,y;
        cin>>c[0]>>c[1]>>c[2];
        sort(c,c+3);
        if(c[2]<=c[1]+c[0]){
            cout<<(c[1]+c[0]+c[2])/2<<endl;
            }
            else
            {
                cout<<c[0]+c[1]<<endl;
            }


    }
}

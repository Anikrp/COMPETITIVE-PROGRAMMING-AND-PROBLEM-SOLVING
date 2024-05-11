#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pcase printf("Case %d: ",c)
using namespace std;
int main()
{
    int c = 1;
    int x;
    cin>>x;
    cin.ignore();
while(x--)
    {
        int b;
        string a;
        cin>>b;
        cin>>a;
        int d=0;

        pcase;
        for(int i =0;i<b;i++){
            if(a[i] == '.'){d++;
            i+=2;}

        }
        cout<<d<<endl;


        c++;

}
}

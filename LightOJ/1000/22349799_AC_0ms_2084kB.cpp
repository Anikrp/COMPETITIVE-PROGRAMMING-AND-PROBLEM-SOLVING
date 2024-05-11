#include<iostream>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    int a[t][1],b[t][1];
    for(i=0;i<t;i++)
    {
        cin>>a[i][0]>>b[i][1];


    }
    for(i=0;i<t;i++){
    cout<<"Case "<<i+1<<": " <<a[i][0]+b[i][1]<<"\n";
    }
}
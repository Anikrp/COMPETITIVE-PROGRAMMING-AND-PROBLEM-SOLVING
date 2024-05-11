#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define pcase printf("Case %d:\n",c)
using namespace std;
int main(){
    int t,c=1;
    cin>>t;

    while(t--)
    {
        int s,o;
        cin>>s>>o;
        int arr[s];
        for(int i = 0;i<s;i++){
            cin>>arr[i];
        }
        while(o--){
        cin.ignore();
        string a;
        cin>>a;
        int it,x,y;
       if(a == "S"){
            cin>>it;
            for(int i = 0;i<s;i++){
                arr[i] = it+arr[i];

        }
        }
        else if(a =="M"){
                 cin>>it;
                for(int i = 0;i<s;i++){
                arr[i] = it*arr[i];
            }

        }
        else if(a == "D"){
                 cin>>it;
        for(int i = 0;i<s;i++){
                arr[i] = arr[i]/it;
            }
        }
        else if(a == "R"){
            reverse(arr,arr+s);

        }
           else if(a == "P"){
                cin>>x>>y;

            int E = arr[x];
            arr[x] = arr[y];
            arr[y] = E;
        }
        }

        pcase;
        c++;
        for(int i = 0;i<s-1;i++){
        cout<<arr[i]<<" ";
        }
        cout<<arr[s-1];
        cout<<endl;
}
}


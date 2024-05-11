#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define pcase printf("Case %d:\n",c)
using namespace std;
int main()
{
    int c = 1;
    int t;
    cin>>t;
    while(t--){

        int x1,y1,x2,y2,num;
        cin>>x1>>x2>>y1>>y2>>num;
        int arr[num][2];
        for(int i =0;i<num;i++){
            for(int j =0;j<2;j++){
                cin>>arr[i][j];
            }

        }
        pcase;
        c++;
          int ans[num];
           for(int i =0;i<num;i++){
                int a1,a2;
           a1 = arr[i][0];
           a2 = arr[i][1];
           if(a1>=x1 && a1<=y1){
            if(a2>= x2 && a2 <= y2){ans[i]=1;}
            else
             ans[i] = 0;
        }
        else
             ans[i] = 0;

        }
        for(int i =0;i<num;i++){
            if(ans[i] ==1){cout<<"Yes"<<endl;}
            else
                       cout<<"No"<<endl;

        }
    }
}

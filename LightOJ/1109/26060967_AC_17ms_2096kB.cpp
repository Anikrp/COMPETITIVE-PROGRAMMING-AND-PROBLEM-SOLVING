#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define pcase printf("Case %d: ",c)
using namespace std;

struct a{
    int num ;
    int dev;

}arr[1001];

bool comp(a x, a y){
    if(x.dev == y.dev)
    {return x.num>y.num;
    }else return x.dev<y.dev;
}
void nod(){
    for(int i =1;i<1001;i++){
            arr[i].num = i;
            arr[i].dev = 1;
    }
    for(int i= 2;i<1001;i++){
            int cnt=0;
            int sq = sqrt(i);
        for(int j =1;j<=i;j++){
           if(i%j==0){cnt++;}
        }
        arr[i].dev = cnt;

    }

}
int main()
{
    nod();
    sort(arr,arr+1001,comp);
    int t,c = 1;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        pcase;
        c++;
        cout<<arr[n].num<<endl;
}
}

#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
int n, cow;
int arr[100000+5];
bool isE(int x){
    int c = 1;
    int j = 0;
    for(int i = 1;i<n;i++){

        if(arr[i]-arr[j]>=x){
            c++;
            if(c == cow){break;}
        j=i;
        }
    }

    if(c== cow){

    return true;
    }else{
    return false;
    }


}
int bin(){
     int l = 0,r = arr[n-1]-arr[0];
     int ans = -1;
            int mid = 0;
            while(l<=r){
                mid = (l+r)/2;
                if(isE(mid) == true){
                    ans = mid;
                    l = mid+1;
                }else{
                    r = mid-1;

                }
            }
            return ans ;
}

int main(){
    //fast;
    int t;
    cin>>t;
    while(t--){
            cin>>n>>cow;
            for(int i = 0;i<n;i++){
                cin>>arr[i];
            }
            sort(arr,arr+n);
            cout<<bin()<<nl;



        }

}

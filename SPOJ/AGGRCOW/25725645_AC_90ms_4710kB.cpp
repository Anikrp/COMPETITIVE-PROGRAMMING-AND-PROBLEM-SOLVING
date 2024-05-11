#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll l,r,mid;

int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll ans,s,c;
        cin>>s>>c;
       ll arr[s];
        for(ll i =0;i<s;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+s);
         l = 0;
         r = arr[s]-1;


         while (l<=r)
         {
              mid = (l+r)/2;
              ll flag = 1;
            ll sum = 1,pos = arr[0];
             for(ll i =0;i<s-1;i++){

                if((arr[i+1]-pos)>=mid){
                    pos = arr[i+1];
                        sum++;
                        if(sum==c) break;
                        }
                       // cout<<"sum = "<<sum<<"\n";
                        }
                  if (sum == c)
                  {
                      l = mid+1;
                     ans = mid;
                  }
                  else
                  {
                      r = mid-1;
                  }

         }
         cout<<ans<<"\n";

    }


    }
///ANIK

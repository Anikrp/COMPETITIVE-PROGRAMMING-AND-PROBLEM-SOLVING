#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi acos(-1)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pcase printf("Case %d:\n",ca)
int ca=1;
using namespace std;
int a[200001];
int main(){
    int t;
    cin>>t;
    int l=0,r=0;
    while(t--){
    	char c;
    	int id;
    	cin>>c>>id;
    	if(c=='L'){
    		l++;
    		a[id]=0-l;
    	}
    	else if(c=='R'){
    		r++;
    		a[id]=r;
    	}
    	else{
    		int ans;
    		if(a[id]>0){
    			ans=r-a[id];
    			ans=min(ans,a[id]-1+l);
    		}
    		else{
    			ans=l+a[id];
    			ans=min(ans,0-a[id]-1+r);
    		}
    		cout<<ans<<nl;
    	}
}
}

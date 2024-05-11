#include<bits/stdc++.h>
using namespace std;
int prime(int x) {
		if(x==2)return 1;
		int s=sqrt(x);
		for(int c=2;c<=s;c++)
        if(x%c==0)return 0;
		return 1;
	}
int main()
{     long long n,i,j,s,x,sq;
      cin>>n;
		for(i=0;i<n;i++) {
			cin>>s;
    		sq=sqrt(s);
            if(prime(sq)&&sq*sq==s&&s>3)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
		}
    
}
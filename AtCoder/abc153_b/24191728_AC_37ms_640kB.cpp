#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,n,i,sum =0;
	cin>>h>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=a[i]+sum;
	}

	if(sum>=h)
	{
		cout<<"Yes";
	}
	else{
		cout<<"No";}
}

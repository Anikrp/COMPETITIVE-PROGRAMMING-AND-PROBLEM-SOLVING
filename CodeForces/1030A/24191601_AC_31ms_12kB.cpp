#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,f=1;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];

	}
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			f=0;
		}
	}
	if(f==0)
	{
		cout<<"HARD";
	}
	else
		cout<<"EASY";
}

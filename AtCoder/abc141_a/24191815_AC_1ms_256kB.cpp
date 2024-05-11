#include<bits/stdc++.h>
using namespace std;
int main()
{
	string x;
	cin>>x;
	if(x[0]=='S'||x[0]=='s')
	{
		cout<<"Cloudy";
	}
	else if(x[0]=='C'||x[0]=='c')
	{
		cout<<"Rainy";
	}
	else if(x[0]=='R'||x[0]=='r')
		cout<<"Sunny";

}

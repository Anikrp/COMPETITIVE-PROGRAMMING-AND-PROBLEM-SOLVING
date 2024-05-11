#include<bits/stdc++.h>
using namespace std;
int gcd(int a ,int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

int main(){
	int a,b,g;

	cin >> a >> b;
	g = gcd(a,b);

	a = a / g;
	b = b / g;
	int c = 0;

	while( b % 2 == 0 ) c++ , b /= 2;
	while( b % 3 == 0 ) c++ , b /= 3;
	while( b % 5 == 0 ) c++ , b /= 5;
	while( a % 2 == 0 ) c++ , a /= 2;
	while( a % 3 == 0 ) c++ , a /= 3;
	while( a % 5 == 0 ) c++ , a /= 5;
	if( a > 1 || b > 1 ) cout << -1 <<endl;
	else cout <<c<<endl;

}
